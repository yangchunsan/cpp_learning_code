// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// using namespace std;
//
// //快速排序
//
// int partition(vector<string>& arr, int low, int high) {
//     string pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[high]);
//     return i + 1;
// }
//
// void quickSort(vector<string>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
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
//     quickSort(strings, 0, strings.size()-1);
//
//     ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
//     for (const auto& s : strings) {
//         outFile << s << endl;
//     }
//     outFile.close();
//
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


//快速排序的分割操作，将数组分为两部分，左侧小于等于pivot，右侧大于pivot
//arr 待排序的字符串数组引用
//low 当前分割区间的起始索引
//high 当前分割区间的结束索引（作为基准值pivot）
//return 返回pivot元素的正确位置索引

int partition(vector<string>& arr, int low, int high) {
    string pivot = arr[high]; // 选择最后一个元素作为基准值
    int i = low - 1; // 初始化较小元素的索引指针，初始指向low的前一位

    // 遍历数组中low到high-1的所有元素
    for (int j = low; j < high; j++) {
        // 若当前元素小于等于pivot，则将其交换到左侧区域
        if (arr[j] <= pivot) {
            i++; // 较小元素区域右扩
            swap(arr[i], arr[j]); // 交换当前元素到左侧区域
        }
    }
    // 将pivot元素交换到正确位置（i+1的位置即为分割点）
    swap(arr[i+1], arr[high]);
    return i + 1; // 返回pivot的最终位置索引
}

//快速排序递归函数，对数组进行原地排序
//arr 待排序的字符串数组引用
//low 当前待排序区间的起始索引
//high 当前待排序区间的结束索引

void quickSort(vector<string>& arr, int low, int high) {
    if (low < high) { //递归终止条件：区间长度大于1
        int pi = partition(arr, low, high); //获取分割点索引
        quickSort(arr, low, pi - 1);  //递归排序左半部分
        quickSort(arr, pi + 1, high); //递归排序右半部分
    }
}

int main() {
    vector<string> strings; //存储从文件读取的字符串
    //打开输入文件
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");

    string line;
    // 逐行读取文件内容到vector中
    while (getline(inFile, line)) {
        strings.push_back(line); //加行到容器末尾
    }
    inFile.close(); //关闭文件流

    //对字符串数组执行快速排序（整个数组范围）
    quickSort(strings, 0, strings.size()-1);

    //打开输出文件（覆盖模式写入）
    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
    //将排序后的字符串逐行写入文件
    for (const auto& s : strings) {
        outFile << s << endl; //此处使用endl保证换行符与系统兼容
    }
    outFile.close(); //关闭输出流

    return 0;
}

// edg
// blg
// xlg
// wol
// te
