#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class Course {
    string name;
    int number;
public:
    friend ostream& operator<<(ostream& out, const Course& p);
    friend istream& operator>>(istream& in, Course& p);
};

// 重载提取运算符>>
istream& operator>>(istream& in, Course& p) {
    string line;
    if (getline(in, line)) {
        size_t lastSpace = line.find_last_of(' ');
        if (lastSpace != string::npos) {
            p.name = line.substr(0, lastSpace);
            p.number = stoi(line.substr(lastSpace + 1));
        }
    }
    return in;
}

// 重载插入运算符<<
ostream& operator<<(ostream& out, const Course& p) {
    out << "课程名称: " << p.name << "\t选课人数: " << p.number;
    return out;
}

int main() {
    ifstream inFile("D:\\Code\\Cpp_Code\\project4.1.txt");
    if (!inFile) {
        cerr << "无法打开文件！" << endl;
        return 1;
    }

    Course course;
    int count = 0;
    while (inFile >> course) { // 调用重载的>>运算符
        cout << course << endl; // 调用重载的<<运算符
        count++;
    }

    cout << "总记录数: " << count << endl;
    inFile.close();

    system("pause");


    return 0;
}