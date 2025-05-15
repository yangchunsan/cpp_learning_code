//加号运算符重载

//  #include <iostream>
//
//  using namespace std;
//
//  class Person {
//      public:
//
//      int m_A;
//      int m_B;
//      //成员函数重载+号
//      // Person operator+(Person &p) {
//      //     Person temp;
//      //     temp.m_A = this->m_A + p.m_A;
//      //     temp.m_B = this->m_B + p.m_B;
//      //
//      //     return temp;
//      // }
//  };
//  //这里的this指针指向的对象就是p1，p2是传递给重载的加号运算符的参数
//
// // //全局函数重载+号
// // //这里函数的返回类型是Person类
// Person operator+(Person &p1, Person &p2) {
//     Person temp;
//     temp.m_A = p1.m_A + p2.m_A;
//     temp.m_B = p1.m_B + p2.m_B;
//
//     return temp;
// }
//
// //来一个全局函数的重载
// Person operator+(Person &p1, int num) {
//     Person temp;
//     temp.m_A = p1.m_A + num;
//     temp.m_B = p1.m_B + num;
//
//     return temp;
// }
//
// void test01() {
//     Person p1;
//     p1.m_A = 10;
//     p1.m_B = 10;
//
//     Person p2;
//     p2.m_A = 10;
//     p2.m_B = 10;
//
// //     //成员函数重载的本质调用
// //     // Person p3 = p1.operator+(p2);
// //
// //     //全局函数重载的本质调用
// //     // Person p3 = operator+ (p1, p2);
// //
//      Person p3 = p1 + p2;
// //
//      //运算符重载也可以发生函数重载
//      Person p4 = p1 + 10;
//
//      cout << p3.m_A << endl;
//      cout << p3.m_B << endl;
//
//      cout << p4.m_A << endl;
//      cout << p4.m_B << endl;
// }
//
// int main(){
//      test01();
//
//     return 0;
//  }

// 左移运算符重载

 #include <iostream>

 using namespace std;

 class Person {
     public:
     int m_A;
     int m_B;
 };

ostream& operator<<(ostream &cout, Person &p) {//cout的数据类型是ostream
     cout << p.m_A << " " << p.m_B << endl;

    return cout;
 }


 void test01() {
     Person p;
     p.m_A = 10;
     p.m_B = 10;

     cout << p << endl;
 }

 int main() {
     test01();

     return 0;
 }

// 这样子可以成功运行，但是，结束了吗？
// 并没有。我们发现如果继续追加<< endl会报错
// 由链式编程思想我们可以知道，因为前面void，后面就无法继续链接下去了
// 所以需要修改函数的返回类型，并且一定还是引用，才能继续链接下去

//递增运算符重载

// #include <iostream>
//
// using namespace std;
//
// //重载递增运算符
//
// //自定义整型
// class MyInteger {
//     friend ostream& operator<<(ostream& cout, MyInteger myint);
// private:
//     int m_Num;
//
// public:
//     MyInteger() {
//         m_Num = 0;
//     }//构造函数初始化变量
//
// };
//
// //先重载一下左移运算符
// ostream& operator<<(ostream& cout, MyInteger myint) {
//     cout << myint.m_Num;//还得做个友元函数声明
//
//     return cout;
// }
// void test01() {
//     MyInteger myint;
//
//     cout << myint << endl;
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

