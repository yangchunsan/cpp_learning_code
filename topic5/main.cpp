#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
    Point(int x_, int y_) : x(x_), y(y_) {}
};

struct Result {
    Point p1;
    Point p2;
    int distance_sq;

    Result(Point p1_, Point p2_, int d_sq) : p1(p1_), p2(p2_), distance_sq(d_sq) {}
};

bool compareX(const Point& a, const Point& b) {
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool compareY(const Point& a, const Point& b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
}

int distanceSq(const Point& a, const Point& b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx*dx + dy*dy;
}

Result bruteForce(const vector<Point>& points, int left, int right) {
    int min_dist_sq = INT_MAX;
    Point p1 = points[left];
    Point p2 = points[left + 1];

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

Result closestPairRecursive(const vector<Point>& points, int left, int right) {
    if (right - left + 1 <= 3) {
        return bruteForce(points, left, right);
    }

    int mid = (left + right) / 2;
    Result left_res = closestPairRecursive(points, left, mid);
    Result right_res = closestPairRecursive(points, mid + 1, right);

    Result current_min = (left_res.distance_sq < right_res.distance_sq) ? left_res : right_res;
    int mid_x = points[mid].x;

    vector<Point> strip;
    for (int i = left; i <= right; ++i) {
        int dx = points[i].x - mid_x;
        if (dx * dx < current_min.distance_sq) {
            strip.push_back(points[i]);
        }
    }

    sort(strip.begin(), strip.end(), compareY);

    for (int i = 0; i < strip.size(); ++i) {
        for (int j = i + 1; j < strip.size(); ++j) {
            int dy = strip[j].y - strip[i].y;
            if (dy * dy >= current_min.distance_sq) {
                break;
            }
            int dist_sq = distanceSq(strip[i], strip[j]);
            if (dist_sq < current_min.distance_sq) {
                current_min = Result(strip[i], strip[j], dist_sq);
            }
        }
    }

    return current_min;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略换行符

    string line;
    getline(cin, line); // 读取坐标行

    // 替换所有非数字字符为空格
    for (char& c : line) {
        if (!isdigit(c)) {
            c = ' ';
        }
    }

    vector<Point> points;
    istringstream iss(line);
    int x, y;
    while (iss >> x >> y) {
        points.emplace_back(x, y);
    }

    // 按x排序
    sort(points.begin(), points.end(), compareX);

    Result result = closestPairRecursive(points, 0, points.size() - 1);

    // 输出结果
    cout << "最小距离点对为：(" << result.p1.x << "," << result.p1.y << "), (" << result.p2.x << "," << result.p2.y << ")" << endl;
    cout << "最小距离为：" << sqrt(result.distance_sq) << endl;

    return 0;
}