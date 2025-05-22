#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <climits>
#include <cmath>
#include <stdlib.h>  // 用于 system("pause")

using namespace std;

// 点结构体：存储二维平面点的坐标
struct Point {
    int x, y;
    Point(int x_, int y_) : x(x_), y(y_) {}
};

// 结果结构体：存储最近点对及其距离的平方（避免浮点误差）
struct Result {
    Point p1;
    Point p2;
    int distance_sq;  // 距离的平方

    Result(Point p1_, Point p2_, int d_sq)
        : p1(p1_), p2(p2_), distance_sq(d_sq) {}
};

// 按x坐标排序的比较函数（若x相同则按y排序）
bool compareX(const Point& a, const Point& b) {
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

// 按y坐标排序的比较函数（若y相同则按x排序）
bool compareY(const Point& a, const Point& b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
}

// 计算两点间距离的平方（避免浮点运算）
int distanceSq(const Point& a, const Point& b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx*dx + dy*dy;
}

// 暴力法求解最近点对（当点集规模≤3时调用）
Result bruteForce(const vector<Point>& points, int left, int right) {
    int min_dist_sq = INT_MAX;
    Point p1 = points[left];
    Point p2 = points[left + 1];

    // 遍历所有可能的点对组合
    for (int i = left; i <= right; ++i) {
        for (int j = i + 1; j <= right; ++j) {
            int dist_sq = distanceSq(points[i], points[j]);
            if (dist_sq < min_dist_sq) {
                min_dist_sq = dist_sq;
                p1 = points[i];
                p2 = points[j];
            }
        }
    }
    return Result(p1, p2, min_dist_sq);
}

// 分治法递归求解最近点对
Result closestPairRecursive(const vector<Point>& points, int left, int right) {
    // 递归终止条件：点数≤3时直接暴力求解
    if (right - left + 1 <= 3) {
        return bruteForce(points, left, right);
    }

    // 划分中点
    int mid = (left + right) / 2;

    // 递归处理左右子集
    Result left_res = closestPairRecursive(points, left, mid);
    Result right_res = closestPairRecursive(points, mid + 1, right);

    // 取左右子集的最小距离
    Result current_min = (left_res.distance_sq < right_res.distance_sq) ? left_res : right_res;
    int mid_x = points[mid].x;  // 中位点的x坐标

    // 筛选中间区域（x坐标在[mid_x - d, mid_x + d]内的点）
    vector<Point> strip;
    for (int i = left; i <= right; ++i) {
        int dx = points[i].x - mid_x;
        if (dx * dx < current_min.distance_sq) {
            strip.push_back(points[i]);
        }
    }

    // 按y坐标排序中间区域点集
    sort(strip.begin(), strip.end(), compareY);

    // 检查中间区域的点对（最多比较后6个点）
    for (int i = 0; i < strip.size(); ++i) {
        for (int j = i + 1; j < strip.size(); ++j) {
            // 若y坐标差超过当前最小距离，后续点无需比较
            int dy = strip[j].y - strip[i].y;
            if (dy * dy >= current_min.distance_sq) {
                break;
            }
            // 计算实际距离并更新最小值
            int dist_sq = distanceSq(strip[i], strip[j]);
            if (dist_sq < current_min.distance_sq) {
                current_min = Result(strip[i], strip[j], dist_sq);
            }
        }
    }

    return current_min;
}

int main() {
    // 输入处理
    int n;
    cin >> n;
    cin.ignore();  // 清除输入缓冲区中的换行符

    string line;
    getline(cin, line);  // 读取坐标行

    // 预处理输入：将所有非数字字符替换为空格
    for (char& c : line) {
        if (!isdigit(c)) {
            c = ' ';
        }
    }

    // 解析坐标并构建点集
    vector<Point> points;
    istringstream iss(line);
    int x, y;
    while (iss >> x >> y) {
        points.emplace_back(x, y);
    }

    // 按x坐标排序（分治法必要条件）
    sort(points.begin(), points.end(), compareX);

    // 调用分治算法求解
    Result result = closestPairRecursive(points, 0, points.size() - 1);

    // 输出结果
    cout << "最小距离点对为：(" << result.p1.x << "," << result.p1.y << "), ("
         << result.p2.x << "," << result.p2.y << ")" << endl;
    cout << "最小距离为：" << sqrt(result.distance_sq) << endl;

    system("pause");  // 防止控制台窗口立即关闭（仅Windows有效）
    return 0;
}