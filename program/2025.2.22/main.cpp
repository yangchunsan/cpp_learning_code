//#include <iostream>
//#include "Dog.h";
//
//using namespace std;
//
//class Person {
//public:
//    void sleep();//在类中定义函数，但是在类外实现
//};
//
//void Person::sleep(){
//    cout << "Person sleep" << endl;
//}
//
//int main() {
//    Person xiaoming;
//    xiaoming.sleep();
//
//    Dog xiaobai;
//    xiaobai.bark();
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//class myNumber{
//public:
//    //在类中定义的静态成员，必须要在类内定义，在类外进行初始化赋值
//    static int a;
//    //如果是静态常量，且数据类型是整型，是允许在定义的时候就进行初始化赋值的
//    const static double PI;
//};
//
////在类外，对静态成员进行初始化的赋值操作
//int myNumber::a = 100;
//const double myNumber::PI = 3.14;
//
//int main(){
//
//    //如何访问静态成员
//    //1.利用对象来访问（极其不推荐）
//    myNumber a;
//    myNumber b;
//
//    cout << a.a << endl;
//    cout << b.a << endl;
//
//    //为什么不推荐？原因是即使表面上看是创建了两个不同的对象，但它们用的是同一个内存空间
//    a.a = 1000;
//    cout << a.a << endl;
//    cout << b.a << endl;
//
//    //2.利用类来访问 格式是：类::类的成员
//    cout << myNumber::a << endl;
//    cout << myNumber::PI << endl;
//
//    return 0;
//}

#include <iostream>

using namespace std;

//构造函数的定义：
//1.构造函数没有返回值类型，直接不写就可以啦
//2.构造函数的名称必须和类名相同
//3.构造函数可以通过不同的参数来实现重载（Overload）

class Person{
public:
    Person(){
        cout << "Person类的无参构造函数执行了"  << endl;
    }
    Person(int age){
        cout << "Person类的有参构造函数执行了" << endl;
    }
    Person(int age, int score){
        cout << "Person类的第二个有参构造函数执行了" << endl;
    }
};

int main(){
    //构造函数的调用：在创建对象的时候调用的
    //1.显式调用
//    Person xiaoming = Person();
//    Person xiaohong = Person(10);
//    Person xiaolan = Person(10, 20);

    //还有缩写的形式
//    Person xiaoming;  //如果使用缩写的方式，来调用无参的构造函数，创建对象需要注意不能去写小括号，系统会认为这是在定义函数
//    Person xiaohong(10);
//    Person xiaolan(10, 20);

    //2.隐式调用：不需要我们自己写Person()，直接将所有的参数写进等号右边的中括号内即可。系统会根据中括号内实参的数量和类型，找到与之匹配的构造函数调用
//    Person xiaoming = {};
//    Person xiaohong = {10};//如果只有一个参数，可以不写中括号
//    Person xiaolan = {10, 20};

    //也可以使用new的方式来创建对象，如果调用的是无参的构造函数，小括号是可以省略的
    //使用new的方式，在堆上创建对象，这个过程称为实例化
    Person *xiaoming = new Person(10);

    return 0;
}