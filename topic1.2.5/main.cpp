// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// #include <stdlib.h>
// using namespace std;
//
// void heapify(vector<string>& arr, int n, int i) {
//     int largest = i;
//     int l = 2 * i + 1;
//     int r = 2 * i + 2;
//
//     if (l < n && arr[l] > arr[largest]) largest = l;
//     if (r < n && arr[r] > arr[largest]) largest = r;
//
//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
//
// void heapSort(vector<string>& arr) {
//     int n = arr.size();
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
//
//     for (int i = n - 1; i > 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }
//
// int main() {
//     vector<string> strings;
//     ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
//
//     string line;
//     while (getline(inFile, line)) {
//         strings.push_back(line);
//     }
//     inFile.close();
//
//     heapSort(strings);
//
//     ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
//     for (const auto& s : strings) {
//         outFile << s << endl;
//     }
//     outFile.close();
//
//     system("pause");
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

//  维护最大堆性质（确保父节点大于等于子节点）
// arr 待调整的字符串数组引用
//  n  当前堆的有效元素范围
// 需要维护堆性质的节点索引

void heapify(vector<string>& arr, int n, int i) {
    int largest = i;       // 初始化最大节点为当前节点
    int l = 2 * i + 1;     // 左子节点索引 = 2*i + 1
    int r = 2 * i + 2;     // 右子节点索引 = 2*i + 2

    // 比较左子节点与当前最大节点（注意索引边界）
    if (l < n && arr[l] > arr[largest])
        largest = l;       // 更新最大节点为左子节点

    // 比较右子节点与当前最大节点
    if (r < n && arr[r] > arr[largest])
        largest = r;       // 更新最大节点为右子节点

    // 如果最大值不是当前节点，需要交换并递归调整
    if (largest != i) {
        swap(arr[i], arr[largest]);  // 交换节点值
        heapify(arr, n, largest);    // 递归调整受影响的子树
    }
}

// 堆排序主函数（原地排序）
// arr 待排序字符串数组的引用

void heapSort(vector<string>& arr) {
    int n = arr.size();
    // 构建最大堆：从最后一个非叶子节点开始调整
    // 最后一个非叶子节点索引 = n/2 - 1（完全二叉树性质）
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 逐次提取最大值到数组末端
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);  // 将当前堆顶（最大值）交换到末尾
        heapify(arr, i, 0);    // 调整剩余元素的堆结构（堆大小减1）
    }
}

int main() {
    vector<string> strings;  // 创建字符串容器

    // 文件读取
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  // 注意路径转义


    string line;
    while (getline(inFile, line)) {  // 逐行读取（保留换行符分隔）
        strings.push_back(line);     // 存储原始字符串
    }
    inFile.close();  // 显式关闭输入流

    // 执行堆排序
    if (!strings.empty()) {  // 防止空数组操作
        heapSort(strings);   // 原地排序，无需返回
    }

    // 结果写入文件
    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  // 覆盖模式
    for (const auto& s : strings) {  // 遍历排序后的字符串
        outFile << s << endl;
    }
    outFile.close();

    return 0;
}

// edg
// blg
// xlg
// wol
// te