#include <iostream>
#include <string>
using namespace std;

// ǰ������
class Girl;

class Boy {
private:
    string name;
    int age;

public:
    Boy(string n, int a) : name(n), age(a) {}
    void display() { cout << "Boy: " << name << ", " << age << endl; }
    void VisitGirl(Girl& g);
    friend class Girl; // ��Girl����ΪBoy�����Ԫ��
    // ��Ӷ�VisitBoyGirl��������Ԫ����
    friend void VisitBoyGirl(Boy&, Girl&);
};

class Girl {
private:
    string name;
    int age;

public:
    Girl(string n, int a) : name(n), age(a) {}
    void display() { cout << "Girl: " << name << ", " << age << endl; }
    void VisitBoy(Boy& b);
    friend class Boy; // ��Boy����ΪGirl�����Ԫ��
    friend void VisitBoyGirl(Boy&, Girl&); // �����㺯������Ϊ��Ԫ����
};

void Girl::VisitBoy(Boy& b) {
    cout << name << " visits " << b.name << endl;
}

void Boy::VisitGirl(Girl& g) {
    cout << name << " visits " << g.name << endl;
}

// ��VisitBoyGirl��������ΪBoy��Girl�����Ԫ����
void VisitBoyGirl(Boy& b, Girl& g) {
    cout << "Visit: " << b.name << " and " << g.name << endl;
}

int main() {
    Girl g("Alice", 20);
    Boy b("Bob", 22);

    g.display();
    b.display();

    g.VisitBoy(b);
    b.VisitGirl(g);

    VisitBoyGirl(b, g);

    return 0;
}