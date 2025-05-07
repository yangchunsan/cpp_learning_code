#include <iostream>
#include <string>
using namespace std;

// 前向声明
class Girl;

class Boy {
private:
    string name;
    int age;

public:
    Boy(string n, int a) : name(n), age(a) {}
    void display() { cout << "Boy: " << name << ", " << age << endl; }
    void VisitGirl(Girl& g);
    friend class Girl; // 将Girl类作为Boy类的友元类
    // 添加对VisitBoyGirl函数的友元声明
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
    friend class Boy; // 将Boy类作为Girl类的友元类
    friend void VisitBoyGirl(Boy&, Girl&); // 将顶层函数声明为友元函数
};

void Girl::VisitBoy(Boy& b) {
    cout << name << " visits " << b.name << endl;
}

void Boy::VisitGirl(Girl& g) {
    cout << name << " visits " << g.name << endl;
}

// 将VisitBoyGirl函数声明为Boy和Girl类的友元函数
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