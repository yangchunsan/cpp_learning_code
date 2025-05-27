//继承中同名成员处理

// #include <iostream>
//
// using namespace std;
//
// class Base {
//     public:
//      int m_A = 100;
//
//     //构造函数
//     Base():m_A(100){}
//
//     //成员函数
//     void func() {
//         cout << "Base-func" << endl;
//     }
//
//     void func(int a) {
//         cout << "Base::func(int a 被调用)" << a << endl;
//     }
// };
//
// class Son:public Base {
// public:
//     int m_A;
//
//     //构造函数
//     Son():m_A(200){}
//
//     //成员函数
//     void func() {
//         cout << "Son-func" << endl;
//     }
// };
//
// //同名的成员属性
// void test01() {
//     Son s;
//     cout << s.m_A << endl;
//     //如果通过子类对象，访问到父类中的同名函数，需要加作用域
//     cout << s.Base::m_A << endl;
// }
//
// //同名的成员函数
// void test02() {
//     Son s;
//     s.func();//直接调用的是子类的同名成员
//     //加了作用域即可访问父类的同名成员
//     s.Base::func();
//
//     //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//     //如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//     s.Base::func(100);
// }
//
// int main() {
//     // test01();
//     test02();
//
//     return 0;
// }

//继承同名静态成员处理方式

// #include <iostream>
//
// using namespace std;
//
// class Base {
//     public:
//
//     static int m_A;
//     //静态数据成员必须在类外初始化
//
//     static void func();
//     //静态成员函数必须在类外初始化
//     static void func(int a);
// };
//
// //类外初始化不用强调static
// int Base::m_A = 100;
//
// void Base::func() {
//     cout << "Base static func()" << endl;
// }
//
// void Base::func(int a) {
//     cout << "Base static func(int a)" << endl;
// }
//
// class Son:public Base {
//     public:
//     static int m_A;
//
//     static void func();
//     //静态成员函数必须在类外初始化
// };
//
// //类外初始化
// int Son::m_A = 200;
//
// void Son::func() {
//     cout << "Son static func()" << endl;
// }
//
// //同名静态成员属性
// void test01() {
//
//     //1. 通过对象来访问数据
//     cout << "通过对象来访问数据" << endl;
//     Son s;
//     cout << s.m_A << endl;
//     cout << s.Base::m_A << endl;
//
//     //2. 通过类名访问数据
//     cout << "通过类名访问数据" << endl;
//     cout << Son::m_A << endl;
//     cout << Base::m_A << endl;
//     //第一个::代表通过类名方式访问
//     //第二个::代表访问父类作用域下
//     cout << Son::Base::m_A << endl;
// }
//
// //同名静态成员函数属性
// void test02() {
//
//     //1. 通过对象来访问数据
//     Son s;
//     s.func();
//     s.Base::func();
//
//     //2. 通过类名访问数据
//     Son::func();
//     Base::func();
//     Son::Base::func();
//
//     //子类出现和父类同名静态成员函数，也会隐藏掉父类中所有同名成员函数
//     //如果想访问父类中被隐藏的同名成员，也需要加作用域
//     Son::Base::func(100);
// }
//
// int main() {
//     test01();
//     test02();
//
//     return 0;
// }

//多继承语法

// #include <iostream>
//
// using namespace std;
//
// class Base1 {
// public:
//     int m_A;
//
//     Base1() : m_A(100) {}
// };
//
// class Base2 {
// public:
//     int m_A;
//
//     Base2() : m_A(200) {}
// };
//
// //子类需要继承Base1和Base2
//
// class Son:public Base1, public Base2 {
// public:
//     int m_C;
//     int m_D;
//
//     Son():m_C(300), m_D(400){}
// };
//
// void test01() {
//     Son s;
//     cout << sizeof(Son) << endl;
//
//     //当父类中出现同名成员，需要加作用域区分
//     cout << s.Base1::m_A << endl;
//     cout << s.Base2::m_A << endl;
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

//菱形继承

// #include <iostream>
//
// using namespace std;
//
// //动物类
// class Animal {
// public:
//     int m_age;
// };
//
// //利用虚继承可以解决菱形继承的问题
// //继承之前，加上关键字virtual 变为虚继承
// //Animal类称为虚基类
//
// //羊类
// class Sheep:virtual public Animal {
//     public:
//
// };
//
// //陀类
// class Camel:virtual public Animal{};
//
// //羊驼类
// class Alpaca:public Sheep, public Camel {
//
// };
//
// void test01() {
//     Alpaca alpaca;
//     alpaca.Sheep::m_age = 18;
//     alpaca.Camel::m_age = 28;
//     //当菱形继承时，两个父类拥有相同数据，需要加以作用域进行区分
//     cout << alpaca.Sheep::m_age << endl;
//     cout << alpaca.Camel::m_age << endl;
//     cout << alpaca.m_age << endl;//这个时候也不报错了
//
//     //这份数据只要有一份就好，由于菱形继承导致数据有两份，造成了资源浪费
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

//多态

#include <iostream>

using namespace std;

//动物类
class Animal {
public:
    void speak() {
        cout << "动物在说话" << endl;
    }
};

//猫类
class Cat : public Animal {
public:
    void speak() {
        cout << "小猫在说话" << endl;
    }
};

//执行说话的函数
//地址早绑定，在编译阶段确定函数地址
//如果想让猫执行，让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animal& animal) {
    animal.speak();
}

void test01() {//向上转换
    Cat cat;
    doSpeak(cat);
}

int main() {
    test01();

    return 0;
}