// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// #include <stdlib.h>
// using namespace std;
//
// //希尔排序
//
// void shellSort(vector<string>& arr) {
//     int n = arr.size();
//     for (int gap = n/2; gap > 0; gap /= 2) {
//         for (int i = gap; i < n; i++) {
//             string temp = arr[i];
//             int j;
//             for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
//                 arr[j] = arr[j - gap];
//             }
//             arr[j] = temp;
//         }
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
//     shellSort(strings);
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

//希尔排序

void shellSort(vector<string>& arr) {
    int n = arr.size();
    //初始间隔（gap）设为数组长度的一半，后续每次循环缩小间隔直到为1
    for (int gap = n/2; gap > 0; gap /= 2) {
        //对每个间隔分组执行插入排序
        for (int i = gap; i < n; i++) {  //从gap位置开始遍历
            string temp = arr[i];  //保存当前需要插入的元素
            int j;  //用于记录最终插入位置的索引

            //对当前元素所在的分组进行插入排序：
            //1. 组内元素间隔为gap
            //2. 若前一个组元素 > temp，则后移元素
            //3. 循环结束时j即为插入位置

            for (j = i;
                 j >= gap && arr[j - gap] > temp;  //比较时使用字符串的字典序
                 j -= gap)
            {
                arr[j] = arr[j - gap];  //将较大的元素后移
            }
            arr[j] = temp;  //将保存的元素插入正确位置
        }
    }
}

int main() {
    vector<string> strings;  //创建存储字符串的容器

    //从文件读取数据
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  //注意路径转义

    //验证文件是否成功打开（代码中未体现，实际建议添加）
    string line;
    while (getline(inFile, line)) {  //逐行读取内容
        strings.push_back(line);     //添加到容器尾部
    }
    inFile.close();  //显式关闭输入流

    //执行希尔排序
    shellSort(strings);  //直接修改原数组

    // 将排序结果写回文件
    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");  //覆盖模式
    for (const auto& s : strings) {  //遍历已排序的字符串
        outFile << s << endl;        //写入并添加换行符
    }
    outFile.close();  //显式关闭输出流

    return 0;
}


// edg
// blg
// xlg
// wol
// te
