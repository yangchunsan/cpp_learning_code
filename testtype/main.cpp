#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // 注意：路径中的反斜杠需要转义为双反斜杠
    string path = "D:\\Code\\Cpp_Code\\testagain.txt";

    ofstream file(path);

    if (file.is_open()) {
        file << "gunnum";
        file.close();
        cout << "have finished" << path << endl;
    } else {
        cerr << "错误：无法写入文件！可能原因：" << endl;
        cerr << "1. 路径不存在" << endl;
        cerr << "2. 权限不足" << endl;
        cerr << "3. 路径包含非法字符" << endl;
        return 1;
    }

    system("pause");

    return 0;
}