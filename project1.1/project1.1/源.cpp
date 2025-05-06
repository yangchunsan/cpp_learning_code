#include <iostream>
#include <string>
using namespace std;

class BookCard {
private:
    string id;          // ����֤ѧ����ѧ��
    string stuName;     // ����֤ѧ��������
    int number;         // �����������

public:
    // ���캯��
    BookCard(string i = "B19010250", string n = "ѩ��", int num = 4) : id(i), stuName(n), number(num) {}

    // ��ʾ����֤��Ϣ
    void display() {
        cout << id << " " << stuName << " " << number << endl;
    }

    // ���麯��
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
    BookCard bk1("B20190620", "��ƽ", 10), bk2;
    f(bk1);
    f(bk2);
    return 0;
}
