//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    int age;
//    string name;
//
//    Person() {}
//
//    Person(int age){
//        cout << "无参构造函数被调用了" << endl;
//    }
//
//    Person(int age, string name) : age(age), name(name) {
//        cout << "构造函数被调用了" << endl;
//    }
//
//    // 显式定义拷贝构造函数， 这个是可以不用定义的，编译器会默认生成拷贝构造函数
//    Person(const Person& other) : age(other.age), name(other.name) {
//        cout << "拷贝构造函数被调用了" << endl;
//    }
//
//    ~Person(){
//        cout << "析构函数被调用了" << endl;
//    }
//};
//
//int main() {
//    Person xiaoming(18, "xiaoming"); // 创建一个对象
//
//    // 创建一个新对象，并用老对象初始化
////    Person xiaobai = Person(xiaoming);//显式调用
//    //调用拷贝构造函数的方法也有三种，显式调用，括号法和隐式调用
////    Person xiaobai(xiaoming);//括号法
////    Person xiaobai = {xiaoming};
////    Person xiaobai = xiaoming;
//    Person(20);
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person{
//public:
//    int age;//成员对象
//
//    Person(){
//        cout << "默认构造函数被调用了" << endl;
//    }
//
//    Person (int age){
//        cout << "有参构造函数被调用了"  << endl;
//        age = age;
//    }
//
//    Person(const Person& other):age(other.age){
//        cout << "拷贝构造函数被调用了" << endl;
//    }
//
//    ~Person(){
//        cout << "析构函数被调用了" << endl;
//    };
//};
//
//void test01(){
//    Person p1(20);
//    Person p2(p1);
//};
//
//int main(){
//    test01();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person{
//public:
//    int age{};//成员对象
//    int* height{};
//
//    Person(){
//        cout << "默认构造函数被调用了" << endl;
//    }
//
//    Person (int age, int height){
//        cout << "有参构造函数被调用了"  << endl;
//        this->age = age;
//        this->height = new int(height);
//    }
//
//    //为避免浅拷贝带来的内存重复释放的问题，要自己设计一个拷贝构造函数实现深拷贝
//    Person(const Person& other){
//        cout << "拷贝构造函数的调用" << endl;
//
//        this->age = other.age;
////        this->height = other.height;//浅拷贝就是这样的
//        //深拷贝操作
//        this->height = new int(*other.height);
//    }
//
//    ~Person(){
//        if(height != nullptr){
//            delete height;
//            height = nullptr;
//        }
//        cout << "析构函数被调用了" << endl;
//    };
//};
//
//void test01(){
//    Person p1(18, 160);
//    cout << "p1的年龄是：" << p1.age << " p1的身高是：" << *p1.height << endl;
//
//    Person p2(p1);
//    cout << "p2的年龄是：" << p2.age << " p2的身高是：" << *p2.height <<endl;
//}
//int main(){
//    test01();
//
//    return 0;
//}

#include <iostream>

using namespace std;

class Person{
public:
    static int a;
};

int Person::a = 10;

int main(){

    return 0;
}















































