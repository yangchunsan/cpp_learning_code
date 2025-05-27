#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//插入排序

using namespace std;

void insertionSort(vector<string>& arr) {
    // 从第二个元素开始遍历（下标1）
    for (int i = 1; i < arr.size(); ++i) {
        string key = arr[i];  // 当前待插入元素
        int j = i - 1;        // 已排序部分的最后一个元素下标

        // 将比key大的元素向右移动，寻找插入位置
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];  // 元素右移
            j--;                // 向左比较前一个元素
        }
        arr[j+1] = key;  // 将key插入正确位置
    }
}

int main() {
    vector<string> strings;  //存储文件内容的容器

    //打开输入文件，这里使用绝对路径
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");

    //文件读取异常处理
    if (!inFile.is_open()) {
        cerr << "错误：无法打开输入文件！" << endl;
        system("pause");
        return 1;
    }

    //逐行读取文件内容到容器
    string line;
    while (getline(inFile, line)) {
        strings.push_back(line);  //添加行到vector末尾
    }
    inFile.close();  //关闭文件流

    //执行插入排序
    insertionSort(strings);

    //打开输出文件
    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");

    //文件写入异常处理
    if (!outFile.is_open()) {
        cerr << "错误：无法打开输出文件！" << endl;
        //标准错误输出，通常也是输出到屏幕。它专门用于输出错误信息或异常信息
        system("pause");
        return 1;
    }

    //将排序结果写入文件
    for (size_t i = 0; i < strings.size(); ++i) {  // 使用for循环遍历
        outFile << strings[i] << endl;  // 写入字符串并换行
    }
    outFile.close();  // 关闭文件流

    return 0;
}

// edg
// blg
// xlg
// wol
// te