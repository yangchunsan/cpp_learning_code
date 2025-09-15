// //多态
//
// #include <iostream>
//
// using namespace std;
//
// //动物类
// class Animal {
//     public:
//     //虚函数，绑定之后，程序运行结果就是小猫在说话
//     virtual void speak() {
//         cout << "动物在说话" << endl;
//     }
// };
//
// //猫类
// class Cat:public Animal {//公有继承
// public:
//     void speak() {
//         cout << "小猫在说话" << endl;
//     }
// };
//
// //狗类
// class Dog:public Animal {
// public:
//     void speak() {
//         cout << "小狗在说话" << endl;
//     }
// };
//
// //执行说话的函数
// //那么程序运行结果是什么？
// //是动物在说话？还是小猫在说话？
// //结果是：动物在说话
// //因为地址早绑定，即在编译阶段就确定函数地址
// //如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，即地址晚绑定
// void doSpeak(Animal &animal) {
//     animal.speak();
//     //在cpp中允许父子之间的数据类型转换，不需要强制类型转换
// }
//
// void test01() {
//     Cat cat;
//     doSpeak(cat);
//
//     Dog dog;
//     doSpeak(dog);
// }
//
// //动态多态的满足条件
// //1.有继承关系
// //2.子类重写父类的虚函数（重写：函数返回值类型、函数名、参数列表、完全相同）
//
// //动态多态的使用
// //父类的指针或者引用，执行子类对象
//
// int main() {
//     test01();
//
//     return 0;
// }
//
// //那么程序运行结果是什么？
// //是动物在说话？还是小猫在说话？
// //结果是：动物在说话


#include <iostream>

using namespace std;

class Animal {
    public:
    //虚函数，绑定之后，程序运行结果就是小猫在说话
    virtual void speak() {
        cout << "动物在说话" << endl;
    }
};

//猫类
class Cat:public Animal {//公有继承
public:
    void speak() {
        cout << "小猫在说话" << endl;
    }
};