#include <iostream>

using namespace std;

class Person{
public:
    Person (){
        cout << "无参构造函数的调用" << endl;
    }

    ~Person(){
        cout << "析构函数的调用" << endl;
    }
};

void test(){
    Person P;
}

int main() {
    Person p;
//    test();

    return 0;
}
