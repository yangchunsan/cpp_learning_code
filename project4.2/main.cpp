#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// ① 读取文件内容并显示
void ReadFile(char* s) {
    ifstream file(s);
    if (!file.is_open()) {
        cerr << "无法打开文件: " << s << endl;
        return;
    }
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    file.close();
}

// ② 转换小写字母并生成新文件
void Change(char* s1, char* s2) {
    ifstream inFile(s1);
    ofstream outFile(s2);
    if (!inFile || !outFile) {
        cerr << "文件操作失败！" << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
}

int main() {
    // 显示原始文件内容
    cout << "原始文件内容：" << endl;
    ReadFile("ff.txt");

    // 转换并生成新文件
    Change("ff.txt", "ff2.txt");

    // 显示新文件内容
    cout << "\n\n转换后文件内容：" << endl;
    ReadFile("ff2.txt");

    return 0;
}