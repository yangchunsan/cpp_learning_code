//重载递增运算符

// #include <iostream>
//
// using namespace std;
//
// //自定义整型
// class MyIntegar {
//     friend ostream& operator<<(ostream& cout, const MyIntegar& myint);
//
// public:
//     MyIntegar() {//构造函数，初始化成员变量
//         m_Num = 0;
//     }
//
//     //发现递增运算符没有办法识别自定义整型，那就只能通过重载的功能来实现
//
//      //重载前置递增运算符的成员函数
//      MyIntegar& operator++() {//返回引用是为了能一直对同一个变量进行操作，避免临时变量的干扰
//          ++m_Num;//功能的实现其实就是将自定义整型里面的变量前置++处理
//
//          // 然后再返回自身的数据类型，即MyIntegar类
//           return *this;
//      }
//
//     //重载后置递增运算符的成员函数
//     //如果这样写：
//     //void operator++() {}
//     //编译器会报错。这是因为函数重载出现了重定义问题，编译器是无法通过重载函数的返回类型来区分的
//     //而作用域，函数参数都相同，编译器无法区分
//     //解决办法是通过占位参数int，通过使参数不同来实现函数重载，实现区分前置和后置的递增或者递减
//      MyIntegar operator++(int) {
//         //这个时候会遇到这个问题，后置递增的本质是先返回原来的数据，然后再对数据进行递增操作
//         //此时如果直接返回原来的数据，会发现无法进行接下来的操作
//
//         //解决方法是：先记录当时结果
//         MyIntegar temp = *this;
//         //再进行递增操作
//         m_Num++;
//         //最后返回的是临时的记录结果
//         return temp;
//     }
//     //这个时候为什么又不返回引用了？
//     //这是因为这个函数，返回的值是一个临时局部变量指针常量，在函数运行完成之后，内存中的数据会销毁
//     //此时如果函数的返回值是临时局部变量的指针常量，但是内存空间已经被销毁，所以是非法的
//
// private:
//     int m_Num;
// };
//
// //需要重载左移运算符，自定义输出自定义数据类型MyIntegar
// ostream& operator<<(ostream& cout, const MyIntegar& myint) {
//     cout<<myint.m_Num;
//
//     return cout;
// }
//
// void test01() {
//     MyIntegar myint;
//
//     cout << ++myint <<endl;
// }
//
// void test02() {
//     MyIntegar myint;
//
//     cout << myint++ << endl;
//     cout << myint << endl;
//
// }
//
// int main() {
//     test01();
//     test02();
//
//     return 0;
// }

// //赋值运算符重载
// #include <iostream>
//
// using namespace std;
//
// class Person {
// public:
//     int *m_age;//指针类型
//
//     Person(int age) {
//         m_age = new int(age);//指定变量初值
//     }
//     //动态开辟内存，数据存放在堆区，由程序员手动开辟
//     //也由程序员手动释放，在析构函数中释放
//
//     //成员函数重载赋值运算符
//     Person& operator=(Person &p) {//函数返回值要符合链式编程思想，跟前面差不多
//         //根据表达式推测是需要传等号右边的参数的
//         //编译器提供的是浅拷贝
//         //m_age = p.m_age;(类似)
//
//         //如果要进行深拷贝操作，那么得先确定征用的那一块堆区内存是没有被使用的
//         if (m_age != nullptr) {
//             delete m_age;
//             m_age = nullptr;
//         }
//
//         //深拷贝
//         m_age = new int(*p.m_age);//内容也拷贝过去
//
//         //返回对象本身
//         return *this;
//     }
//
//     ~Person() {
//         if (m_age != nullptr) {
//             delete m_age;
//             m_age = nullptr;
//         }
//     }
// };
//
// void test01() {
//     Person p1(18);
//     Person p2(20);
//     Person p3(30);
//
//     p3 = p2 = p1;//赋值操作
//
//     cout << *(p1.m_age) << endl;
//     cout << *(p2.m_age) << endl;
//     cout << *(p3.m_age) << endl;
// }
// //虽然在CLion没有报错，可以正常运行，但是其本质上还是有问题的。在VS22程序会崩溃
// //问题在哪，问题在于这个赋值操作是简单的浅拷贝，在析构函数运行两次的时候会重复释放同一块堆区内存而导致程序崩溃
// //解决方法是深拷贝，那么就要修改一下=运算符的功能
//
// int main() {
//     test01();
//
//     return 0;
// }

// //重载关系运算符
//
// #include <iostream>
//
// using namespace std;
//
// class Person {
// public:
//     Person(string name, int age) :m_Name(name), m_Age(age){}
//
//     string m_Name;
//     int m_Age;
//
//     //重载==运算符 !=同理
//     bool operator==(Person &p) {//参数的选择跟前面一样，不多赘述，同样选择成员函数的理由也是如此
//         if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
//     //函数的返回值的选择很有意思，因为是判断相等不相等，然后也是跟运算符的原功能一样
// };
//
// void test01() {
//     Person p1("Tom", 18);
//     Person p2("Tom", 18);
//
//     if(p1 == p2) {
//         cout << "相等" << endl;
//     }
//     else {
//         cout << "不相等" << endl;
//     }
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

//函数调用运算符重载

// #include <iostream>
//
// using namespace std;
//
// //打印输出类
// class MyPrint {
//     public:
//
//     //重载函数调用运算符
// };
//
// int main() {
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// //自定义整型
// class MyIntegar {
//     //友元函数允许访问私有域
//     friend ostream& operator<<(ostream& os,  MyIntegar& obj);
// private:
//     int m_Num;
//
// public:
//     //构造函数初始化成员变量
//     MyIntegar():m_Num(0){}
//
//
//     //重载后置递增运算符
//     MyIntegar operator++(int) {
//         //解决方法是：先记录当时结果
//         MyIntegar temp = *this;
//         //再进行递增操作
//         m_Num++;
//         //最后返回的是临时的记录结果
//         return temp;
//     }
// };
//
// //全局函数重载左移运算符
// ostream& operator<<(ostream& cout, MyIntegar& myint) {
//     cout << myint.m_Num << endl;
//
//     return cout;
// }
//
// void test01() {
//     MyIntegar myint;
//
//     cout << myint++ << endl;
// }
//
// int main() {
//     test01();
//
//     return 0;
// }


//赋值运算符重载
// #include <iostream>
//
// using namespace std;
//
// class Person {
// public:
//     int *m_age;//指针类型
//
//     Person(int age) {//构造函数
//         m_age = new int(age);//指定变量初值
//     }
//     //动态开辟内存，数据存放在堆区，由程序员手动开辟
//     //也由程序员手动释放，在析构函数中释放
//
//     //重载赋值运算符
//     Person& operator=(Person& p) {
//         //先确定一下选择的堆区内存是否被占用
//         if (m_age != nullptr) {
//             delete m_age;
//             m_age = nullptr;
//         }
//
//         //然后动态开辟
//         m_age = new int(*p.m_age);
//
//         //最后返回本身
//         return *this;
//     }
//
//     ~Person() {//析构函数
//         if (m_age != nullptr) {
//             delete m_age;
//             m_age = nullptr;
//         }
//     }
// };
//
// void test01() {
//     Person p1(18);
//     Person p2(20);
//     Person p3(30);
//
//     p3 = p2 = p1;//赋值操作
//
//     cout << *(p1.m_age) << endl;
//     cout << *(p2.m_age) << endl;
//     cout << *(p3.m_age) << endl;
// }
//
// int main() {
//     test01();
//
//     return 0;
// }

//函数调用运算符重载

// #include <iostream>
//
// using namespace std;
//
// //打印输出类
// class MyPrinT {
//     public:
//     //重载函数调用运算符
//     void operator()(string test) {
//         cout << test << endl;
//     }
// };
//
// void MyPrinT02(string test) {
//     cout << test << endl;
// }
//
// void test01() {
//     MyPrinT myPrint;
//
//     myPrint("Hello World!");
//     //由于使用起来非常类似于函数调用，因此称为仿函数
//     MyPrinT02("Hello World!");
//
// }
//
// //仿函数非常地灵活，没有一个固定的写法
// //加法类
// class MyAdd {
//     public:
//     int operator()(int num1, int num2) {
//         return num1 + num2;
//     }
// };
//
// void test02() {
//     MyAdd myAdd;
//     int ret = myAdd(100, 200);
//
//     cout << ret << endl;
//
//     //匿名函数对象
//     cout << MyAdd()(100, 100) << endl;//用完即销毁
// }
//
// int main() {
//     test01();
//     test02();
//
//     return 0;
// }

//继承的基本语法

// #include <iostream>
//
// using namespace std;
//
// //普通实现页面
//
// //Java
// class Java {
//     public:
//     void header() {
//         cout << "首页公开课登录注册" << endl;
//     }
//
//     void footer() {
//         cout << "帮助中心，交流合作" << endl;
//     }
//
//     void left() {
//         cout << "Java, Python, Cpp" << endl;
//     }
//
//     void content() {
//          cout << "Java学科视频" << endl;
//     }
// };
//
// //Python
// class Python {
// public:
//     void header() {
//         cout << "首页公开课登录注册" << endl;
//     }
//
//     void footer() {
//         cout << "帮助中心，交流合作" << endl;
//     }
//
//     void left() {
//         cout << "Java, Python, Cpp" << endl;
//     }
//
//     void content() {
//         cout << "Python学科视频" << endl;
//     }
// };
//
// //Cpp
// class Cpp {
// public:
//     void header() {
//         cout << "首页公开课登录注册" << endl;
//     }
//
//     void footer() {
//         cout << "帮助中心，交流合作" << endl;
//     }
//
//     void left() {
//         cout << "Java, Python, Cpp" << endl;
//     }
//
//     void content() {
//         cout << "Cpp学科视频" << endl;
//     }
// };
//
// int main() {
     // cout << "Java下载视频页面如下：" << endl;
     // Java ja;
     // ja.header();
     // ja.content();
     // ja.content();
     // ja.left();
     //
     // cout << "Python下载视频页面如下：" << endl;
     // Python Py;
     // Py.header();
     // Py.content();
     // Py.content();
     // Py.left();
     //
     // cout << "Cpp下载视频页面如下：" << endl;
     // Cpp Cpp;
     // Cpp.header();
     // Cpp.content();
     // Cpp.content();
     // Cpp.left();
//
//     return 0;
// }

//继承实现页面

#include <iostream>

using namespace std;

//公共页面类
class BasePage {
public:
     void header() {
             cout << "首页公开课登录注册" << endl;
         }

         void footer() {
             cout << "帮助中心，交流合作" << endl;
         }

         void left() {
             cout << "Java, Python, Cpp" << endl;
         }

};

//Java
class Java:public BasePage {
public:
    void content() {
        cout << "JAVA教学视频" << endl;
    }
};

//Python
class Python:public BasePage {
public:
    void content() {
        cout << "Python教学视频" << endl;
    }
};

//Cpp
class Cpp:public BasePage {
public:
    void content() {
        cout << "Cpp教学视频" << endl;
    }
};

void test01() {
    cout << "Java下载视频页面如下：" << endl;
    Java ja;
    ja.header();
    ja.content();
    ja.content();
    ja.left();

    cout << "Python下载视频页面如下：" << endl;
    Python Py;
    Py.header();
    Py.content();
    Py.content();
    Py.left();

    cout << "Cpp下载视频页面如下：" << endl;
    Cpp Cpp;
    Cpp.header();
    Cpp.content();
    Cpp.content();
    Cpp.left();
}

int main() {
    test01();

    return 0;
}
