// #include <iostream>
//
// using namespace std;
//
// //定义组件类
// class Engine {
// public:
//     void start() {
//         cout << "Engine start" << endl;
//     }
//
//     void stop() {
//         cout << "Engine stop" << endl;
//     }
// };
//
// //定义包含类
// class Car {
// private:
//     Engine engine;
//
// public:
//     void startCar() {
//         engine.start();
//     }
//
//     void stopCar() {
//         engine.stop();
//     }
// };
//
// void test01() {
//     Car mycar;
//     mycar.startCar();
//     mycar.stopCar();
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// class A {
//     public:
//     int a = 0;
//
//     protected:
//     int b = 0;
//
// private:
//     int c = 0;
// };
//
// int main() {
//
//     return 0;
// }

//继承方式

// #include <iostream>
//
// using namespace std;
//
// class Base1 {
// public:
//     int m_A;
// protected:
//     int m_B;
// private:
//     int m_c;
// };
//
// //公共继承
// class Son1 :public Base1 {
// public:
//     void func() {
//         m_A = 10;//父类中的公共权限成员，到子类依然是公共权限
//         m_B = 10;//父类中的保护权限成员，到子类依然是保护权限
//         //m_C = 10;//父类中的私有权限成员，子类无法访问
//     }
// };
//
// void test01() {
//     Son1 son1;
//     son1.m_A = 100;
//     //son1.m_B = 100;//到Son1的类中，是保护权限，类外访问不到
// }
//
// //保护继承
// class Son2 :protected Base1 {
// public:
//     void func() {
//         m_A = 10;//父类中的公共权限成员，到子类变为保护权限
//         m_B = 10;//父类中的保护权限成员，到子类依然是保护权限
//         //m_C = 10;;//父类中的私有权限成员，子类无法访问
//     }
// };
//
// void test02() {
//     Son2 son2;
//     //son2.m_A = 100;//在Son2中m_A变为保护权限，类外访问不到
// }
//
// //私有继承
// class Son3 :private Base1 {
// public:
//     void func() {
//         m_A = 10;//父类中的公共权限成员，到子类变为私有权限
//         m_B = 10;//父类中的保护权限成员，到子类变为私有权限
//         //m_C = 10;//父类中的私有权限成员，子类无法访问
//     }
// };
//
// void test03() {
//     Son3 son3;
//     //son3.m_A = 10;//到Son3中m_A变为私有权限，类外访问不到
//     //son3.m_B = 10;//到Son3中m_B变为私有权限，类外访问不到
// }
//
// class GrandSon3:public Son3 {
//     public:
//     void func() {
//         //m_A = 10;//到Son3中m_A变为私有权限。子类无法访问
//         //m_B = 10;//到Son3中m_B变为私有权限。子类无法访问
//     }
// };
//
// int main() {
//
//     return 0;
// }

//继承中的对象模型

#include <iostream>

using namespace std;

//基类
class Base {
    public:
    int m_A;
    protected:
    int m_B;
private:
    int m_C;
};

//派生类
class Son: public Base {
    public:
    int m_D;
};

//有没有考虑过，在继承之后，成员变量是仍然属于基类呢，还是属于派生类呢？
void test01() {
    cout << "size of Son: " << sizeof(Son) << endl;
    //16
    //父类中所有非静态成员属性都会被子类继承下去
    //父类中私有域的成员是被编辑器隐藏了，虽然无法访问，但是仍然是正常继承
    cout << "size of Base: " << sizeof(Base) << endl;
}

int main() {
    test01();

    return 0;
}