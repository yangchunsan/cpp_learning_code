//#include <iostream>
//
//using namespace std;
//
//class Test{
//public:
//    int a;
//    int b;
//
//    Test(): b(10), a(b+5){
//        std::cout << "a: " << a << ", b: " << b << std::endl;
//    }
//};
//
//int main() {
//    Test xiaoming = Test();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person{
//public:
//    string name;
//    int age;
//    string gender;
//    int score;
//
//    Person():name(""), age(0), gender(""), score(0) {}
//    //在自定义构造函数之后，不要忘记重新定义一个默认构造函数
//    Person(string name, int age, string gender, int score): name(name), age(age), gender(gender), score(score) {}
//};
//
//int main(){
//    Person xiaobai = Person("xiaobai", 18, "male", 111);
//
//    cout << xiaobai.name << endl;
//    cout << xiaobai.age << endl;
//    cout << xiaobai.gender << endl;
//    cout << xiaobai.score << endl;
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
//    string name;
//
//    Person(){}
//    Person(int age, string name): age(age), name(name){}
//};
//
//int main(){
//    Person xiaoming(18, "xiaoming");
//    Person xiaobai = xiaoming;
//
//    cout << xiaobai.age << endl;
//    cout << xiaobai.name << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    string name;
//
//    Person(const string& name) : name(name) {
//        cout << "Person created: " << name << endl;
//    }
//
//    ~Person() {//析构函数
//        cout << "Person destroyed: " << name << endl;
//    }
//
//    void display()  {//这是一个成员函数，用来实现类的特定功能
//        cout << "Name: " << name << endl;
//    }
//
//
//};
//
//int main() {
//    // 动态分配一个 Person 对象
//    // 在分配内存空间的时候顺便初始化，调用了构造函数
//    Person* person = new Person("Alice");
//
//    // 使用成员函数
//    person->display();
//
//    // 显式释放对象
//    // 从输出结果可以看出析构函数被调用
//    delete person;
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
//    string name;
//
//    Person(){}
//
//    Person(int age, string name): age(age), name(name){
//        cout << "构造函数被调用了" << endl;
//    }
//};
//
//int main(){
//    Person xiaoming(18, "xiaoming");//创建一个对象
//
//    //创建一个新对象，并用老对象初始化
//    Person xiaobai = xiaoming;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    string name;
//
//    Person(const string& name) : name(name) {
//        cout << "Person created: " << name << endl;
//    }
//
//    // 没有显式定义析构函数，编译器会自动生成默认析构函数
//
//    void display() const {
//        cout << "Name: " << name << endl;
//    }
//};
//
//int main() {
//    Person person("Alice");
//    person.display();
//
//    return 0;  // 默认析构函数会在对象生命周期结束时自动调用
//}

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
//    Person(int age, string name){
//        cout << "构造函数被调用了" << endl;
//    }
//
//    // 显式定义拷贝构造函数， 这个是可以不用定义的，编译器会默认生成拷贝构造函数
//    Person(const Person& other) : age(other.age), name(other.name) {
//        cout << "拷贝构造函数被调用了" << endl;
//    }
//};
//
//int main() {
//    Person xiaoming = {18, "xiaoming"}; // 创建一个对象
//
//    // 创建一个新对象，并用老对象初始化
//    Person xiaobai = xiaoming;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    int age;
//    string name;
//
//    // 构造函数
//    Person(int age, string name) : age(age), name(name) {
//        cout << "对象已创建：" << name << endl;
//    }
//
//    // 浅拷贝的拷贝构造函数，拷贝构造函数的本质就是浅拷贝
//    Person(const Person& other) : age(other.age), name(other.name) {
//        cout << "浅拷贝：" << name << endl;
//    }
//};
//
//int main() {
//    Person p1(25, "Alice");
//    Person p2 = p1;  // 使用拷贝构造函数
//
//    cout << "在修改之前:" << endl;
//    cout << "p1.name: " << p1.name << ", p1.age: " << p1.age << endl;
//    cout << "p2.name: " << p2.name << ", p2.age: " << p2.age << endl;
//
//    // 修改 p2 的 name
//    p2.name = "Bob";
//
//    cout << "已修改 p2.name:" << endl;
//    cout << "p1.name: " << p1.name << ", p1.age: " << p1.age << endl;
//    cout << "p2.name: " << p2.name << ", p2.age: " << p2.age << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class PointerHolder {
//public:
//    int* ptr;  // 指向整数的指针
//
//    // 构造函数
//    PointerHolder(int value) {
//        ptr = new int(value);  // 动态分配一个整数
//        cout << "创建并初始化PointerHolder " << *ptr << endl;
//    }
//
//    // 默认的复制构造函数（浅拷贝）
//    PointerHolder(const PointerHolder& other) {
//        ptr = other.ptr;  // 只复制指针
//        cout << "已创建浅拷贝副本 " << *ptr << endl;
//    }
//
//    // 析构函数
//    ~PointerHolder() {
//        delete ptr;  // 释放指针指向的内存
//        cout << "析构PointerHolder" << endl;
//    }
//
//    // 修改指针指向的值
//    void setValue(int value) {
//        *ptr = value;
//    }
//
//    // 获取指针指向的值
//    int getValue() const {
//        return *ptr;
//    }
//};
//
//int main() {
//    PointerHolder p1(10);  // 创建一个对象 p1
//    PointerHolder p2 = p1; // 使用浅拷贝复制 p1 到 p2
//
//    cout << "p1 value: " << p1.getValue() << endl;  // 输出 p1 的值
//    cout << "p2 value: " << p2.getValue() << endl;  // 输出 p2 的值
//
//    // 修改 p2 的值
//    p2.setValue(20);
//
//    cout << "已修改p2: " << endl;
//    cout << "p1 value: " << p1.getValue() << endl;  // 输出 p1 的值
//    cout << "p2 value: " << p2.getValue() << endl;  // 输出 p2 的值
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    int *scores;  // 动态分配的整数数组
//    int size;     // 数组的大小
//
//    // 构造函数
//    Person(int size) : size(size) {
//        scores = new int[size];  // 动态分配内存
//        for (int i = 0; i < size; ++i) {
//            scores[i] = i * 10;  // 初始化数组
//        }
//        cout << "构造函数被调用了" << endl;
//    }
//
//    // 深拷贝构造函数
//    Person(const Person& other) : size(other.size) {
//        scores = new int[size];  // 动态分配内存
//        for (int i = 0; i < size; ++i) {
//            scores[i] = other.scores[i];  // 复制数组内容
//        }
//        cout << "深拷贝构造函数被调用了" << endl;
//    }
//
//    // 析构函数
//    ~Person() {
//        delete[] scores;  // 释放动态分配的内存
//        cout << "析构函数被调用了，释放了 scores 指向的内存" << endl;
//    }
//
//    // 修改分数
//    void modifyScore(int index, int value) {
//        if (index >= 0 && index < size) {
//            scores[index] = value;
//        }
//    }
//
//    // 显示分数
//    void display() const {
//        cout << "Scores: ";
//        for (int i = 0; i < size; ++i) {
//            cout << scores[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Person xiaoming(5);  // 创建对象 xiaoming，包含 5 个分数
//    Person xiaobai = xiaoming;  // 创建对象 xiaobai，调用深拷贝构造函数
//
//    cout << "初始状态:" << endl;
//    xiaoming.display();  // 输出 xiaoming 的分数
//    xiaobai.display();   // 输出 xiaobai 的分数
//
//    // 修改 xiaoming 的分数
//    cout << "\n修改 xiaoming 的分数:" << endl;
//    xiaoming.modifyScore(2, 99);  // 修改 xiaoming 的第 3 个分数
//    xiaoming.display();  // 输出 xiaoming 的分数
//    xiaobai.display();   // 输出 xiaobai 的分数
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
//    Person(){
//        age = 0;
//    }
//
//    Person(int age): age(age){}
//
//    int getAge(){
//        return this->age;
//    }//this 是一个用来指向当前对象的指针。当前对象：谁调用这个函数 ，this就指向谁
//};
//
//int main(){
//    Person xiaoming(10);
//    cout << xiaoming.getAge() << endl;
//
//    Person xiaobai(20);
//    cout << xiaobai.getAge() << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    int age;  // 成员变量，存储年龄
//
//    // 默认构造函数
//    Person() {
//        age = 0;  // 初始化年龄为 0
//    }
//
//    // 参数化构造函数
//    Person(int age) : age(age) {  // 使用初始化列表初始化 age
//    }
//
//    // 成员函数：获取年龄
//    int getAge() {
//        return this->age;  // 使用 this 指针访问当前对象的成员变量 age
//    }
//    // this 是一个指向当前对象的指针。当前对象是谁调用了这个函数，this 就指向谁。
//};
//
//int main() {
//    Person xiaoming(10);  // 创建一个 Person 对象 xiaoming，年龄为 10
//    cout << xiaoming.getAge() << endl;  // 调用 xiaoming 的 getAge 函数，输出 10
//
//    Person xiaobai(20);  // 创建一个 Person 对象 xiaobai，年龄为 20
//    cout << xiaobai.getAge() << endl;  // 调用 xiaobai 的 getAge 函数，输出 20
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    int age;  // 成员变量，存储年龄
//
//    // 默认构造函数
//    Person() {
//        age = 0;  // 初始化 age 为 0
//    }
//
//    // 参数化构造函数
//    Person(int age) : age(age) {  // 使用初始化列表初始化 age
//        // 在这里，形式参数 age 和成员变量 age 同名
//        // 使用 this 指针来区分它们
//        this->age = age;  // this->age 指向成员变量，age 是形式参数
//    }
//
//    // 成员函数：获取年龄
//    int getAge() {
//        return this->age;  // 使用 this 指针访问当前对象的成员变量 age
//    }
//    // this 是一个用来指向当前对象的指针。当前对象是谁调用了这个函数，this 就指向谁。
//};
//
//int main() {
//    Person xiaoming(10);  // 创建一个 Person 对象 xiaoming，年龄为 10
//    cout << xiaoming.getAge() << endl;  // 调用 xiaoming 的 getAge 函数，输出 10
//
//    Person xiaobai(20);  // 创建一个 Person 对象 xiaobai，年龄为 20
//    cout << xiaobai.getAge() << endl;  // 调用 xiaobai 的 getAge 函数，输出 20
//
//    return 0;
//}

#include <iostream>

using namespace std;

class MyNumber{
private:
    int n;

public:
    MyNumber(): n(0){}//默认构造函数
    MyNumber(int n): n(0){}//构造函数

    void display(){//成员函数，打印n的值
        cout << n << endl;
    }

    //设计一个函数，累加上一个数字，返回对象本身
    MyNumber&
};























