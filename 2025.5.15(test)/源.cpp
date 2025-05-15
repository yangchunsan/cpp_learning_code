//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    int* m_age;
//
//    Person(int age) {
//        m_age = new int(age);//指定变量初值
//    }
//    //动态开辟内存，数据存放在堆区，由程序员手动开辟
//    //也由程序员手动释放，在析构函数中释放
//    ~Person() {
//        if (m_age != nullptr) {
//            delete m_age;
//            m_age = nullptr;
//        }
//    }
//};
//
//void test01() {
//    Person p1(18);
//    Person p2(20);
//
//    p2 = p1;//赋值操作
//
//    cout << *(p1.m_age) << endl;
//    cout << *(p2.m_age) << endl;
//}
//
//int main() {
//    test01();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    int* m_age;//指针类型的变量
//
//    //构造函数
//    Person(int age) {
//        m_age = new int(age);//动态开辟内存空间并赋初值
//    }
//};
//
//void test01() {
//    Person p1(18);
//    Person p2(20);
//
//    p2 = p1;
//
//    cout << *p1.m_age << endl;
//    cout << *p2.m_age << endl;
//}
//
//int main() {
//    test01();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int p1 = 18;
//	int p2 = 20;
//	int p3 = 22;
//
//	p3 = p2 = p1;
//
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << p3 << endl;
//
//	return 0;
//}

#include <iostream>

using namespace std;

class Person {
public:
    int* m_age;//指针类型

    Person(int age) {//构造函数
        m_age = new int(age);//指定变量初值
    }
    //动态开辟内存，数据存放在堆区，由程序员手动开辟
    //也由程序员手动释放，在析构函数中释放

    //重载赋值运算符
    Person& operator=(Person& p) {
        //先确定一下选择的堆区内存是否被占用
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }

        //然后动态开辟
        m_age = new int(*p.m_age);

        //最后返回本身
        return *this;
    }

    ~Person() {//析构函数
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }
    }
};

void test01() {
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2 = p1;//赋值操作

    cout << *(p1.m_age) << endl;
    cout << *(p2.m_age) << endl;
    cout << *(p3.m_age) << endl;
}

int main() {
    test01();

    return 0;
}