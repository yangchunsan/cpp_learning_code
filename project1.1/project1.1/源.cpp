#include <iostream>
#include <string>
using namespace std;

class BookCard {
private:
    string id;          // 借书证学生的学号
    string stuName;     // 借书证学生的姓名
    int number;         // 所借书的数量

public:
    // 构造函数
    BookCard(string i = "B19010250", string n = "雪峰", int num = 4) : id(i), stuName(n), number(num) {}

    // 显示借书证信息
    void display() {
        cout << id << " " << stuName << " " << number << endl;
    }

    // 借书函数
    bool borrow() {
        if (number < 10) {
            number++;
            return true;
        }
        return false;
    }
};

void f(BookCard& bk) {
    if (!bk.borrow()) {
        bk.display();
        cout << "you have borrowed 10 books, can not borrow any more!" << endl;
    }
    else {
        bk.display();
    }
}

int main() {
    BookCard bk1("B20190620", "东平", 10), bk2;
    f(bk1);
    f(bk2);
    return 0;
}
