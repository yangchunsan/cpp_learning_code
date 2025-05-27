// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// #include <stdlib.h>
// using namespace std;
//
// //归并排序
// void merge(vector<string>& arr, int left, int mid, int right) {
//     vector<string> temp(right - left + 1);
//     int i = left, j = mid + 1, k = 0;
//
//     while (i <= mid && j <= right) {
//         temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
//     }
//     while (i <= mid) temp[k++] = arr[i++];
//     while (j <= right) temp[k++] = arr[j++];
//
//     for (int p = 0; p < k; p++) {
//         arr[left + p] = temp[p];
//     }
// }
//
// void mergeSort(vector<string>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
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
//     mergeSort(strings, 0, strings.size()-1);
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

// 归并操作：合并两个已排序的子数组
// arr 待排序数组的引用（直接修改原数组）
// left 左子数组起始索引
// mid 中间分隔索引（左子数组结束于mid，右子数组起始于mid+1）
// right 右子数组结束索引

void merge(vector<string>& arr, int left, int mid, int right) {
    vector<string> temp(right - left + 1);  //创建临时数组存储合并结果
    int i = left;      //左子数组指针
    int j = mid + 1;   //右子数组指针
    int k = 0;         //临时数组指针

    //合并两个有序子数组
    while (i <= mid && j <= right) {
        //选择较小元素放入临时数组（使用字符串字典序比较）
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }

    //处理剩余元素（以下两个循环只会执行其中一个）
    while (i <= mid) temp[k++] = arr[i++];  //左子数组剩余元素
    while (j <= right) temp[k++] = arr[j++]; //右子数组剩余元素

    //将排序结果复制回原数组
    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

//归并排序递归实现
//arr 待排序数组的引用
//left 当前排序区间的起始索引
//right 当前排序区间的结束索引

void mergeSort(vector<string>& arr, int left, int right) {
    if (left < right) {  //递归终止条件：区间长度大于1
        int mid = left + (right - left) / 2;  //防止整数溢出的中间值计算
        mergeSort(arr, left, mid);    //递归排序左半部分
        mergeSort(arr, mid + 1, right); //递归排序右半部分
        merge(arr, left, mid, right); //合并两个有序子数组
    }
}

int main() {
    vector<string> strings;  //创建字符串存储容器

    // 文件读取
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  //注意路径转义
    string line;
    while (getline(inFile, line)) {  //逐行读取文件内容
        strings.push_back(line);      //保留换行符分隔
    }
    inFile.close();  //显式关闭输入流

    //执行归并排序
    if (!strings.empty()) {  //防止空数组导致越界
        mergeSort(strings, 0, strings.size()-1);
    }

    //结果写入文件
    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  //覆盖模式
    for (const auto& s : strings) {  //遍历已排序字符串
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