//#include <iostream>
//
//using namespace std;
//
//class Person{
//    int a = 10;
//    int v = 10;
//    const char *b = "a";
//};
//
//int main() {
//    Person P;
//
//    cout << sizeof (P) << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person{
//public:
//    int age;
//
//    void showClassName(){
//        cout << "ClassName show successfully" << endl;
//    }
//
//    void showPersonAge(){
//        cout << "age-> " << age << endl;
//    }
//};
//
//int main(){
//    Person *p = nullptr;
//
//    p->showClassName();
//
//    p->showPersonAge();
//
//    return 0;
//}

#include <iostream>

using namespace std;

class Person{
public:
    int age_a = 10;
    mutable int age_b = 10;

//    void test1() const {
//        this->age_a = 100;
//    }

    void test2() const {
        this->age_b = 100;
        cout << age_b << endl;
    }
};

int main(){
    Person p;

//    p.test1();
    p.test2();

    return 0;
}