//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//	int i;
//	Base(int x) : i(x) {
//
//	}
//
//	void show() {
//		cout << "i in Base is " << i << endl;
//	}
//};
//
//class Derived : public Base {
//public:
//	Derived(int x) : Base(x) {
//
//	}
//
//	void show() {
//		cout << "i in Derived is:" << i << endl;
//	}
//};
//
//int main() {
//	Base /*（1）*/;                                            //定义基类对象b1
//	cout << "基类对象 b1.show():\n";
//	b1.show();
//	Derived /*（2）*/;                                         //定义派生类对象d1
//	/*（3）*/;                                                 //用派生类对象给基类赋值
//	cout << "引用 b1 = b1, b1.show():\n";
//	b1.show;
//	cout << "派生类对象 d1.show():\n";
//	d1.show();
//	Base /*（4）*/;                                            //用派生类对象来初始化基类引用
//	cout << "引用 b2 = d1, b2.show():\n";
//	b2.show();
//	Base /*（5）*/;                                            //派生类对象的地址赋给指向基类的指针
//	cout << "基类指针 b3 = &d1, b3->show():\n";
//	b3->show();
//	Derived* d4 = /*（6）*/;                                   //定义派生类指针并生成新对象
//	Base* b4 = d4;                                             //派生类指针赋给基类的指针
//	cout << "基类指针 b4 = d4, b4->show():\n";
//	b4->show();
//	cout << "派生类指针 d4, d4->show():\n";
//	d4->show();
//	delete d4;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Base {
public:
    int i;
    Base(int x) : i(x) {}
    void show() {
        cout << "i in Base is " << i << endl;
    }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) {}
    void show() {
        cout << "i in Derived is: " << i << endl;
    }
};

int main() {
    // (1) 定义基类对象 b1，初始化值为 10
    Base b1(10);
    cout << "基类对象 b1.show():\n";
    b1.show();

    // (2) 定义派生类对象 d1，初始化值为 20
    Derived d1(20);

    // (3) 用派生类对象给基类对象赋值（对象切片）
    b1 = d1;
    cout << "赋值后 b1.show():\n";
    b1.show();

    // (4) 用派生类对象初始化基类引用
    Base &b2 = d1;
    cout << "引用 b2 = d1, b2.show():\n";
    b2.show();

    // (5) 派生类对象的地址赋给基类指针
    Base *b3 = &d1;
    cout << "基类指针 b3 = &d1, b3->show():\n";
    b3->show();

    // (6) 动态创建派生类对象并赋值给派生类指针
    Derived* d4 = new Derived(30);
    Base* b4 = d4;
    cout << "基类指针 b4 = d4, b4->show():\n";
    b4->show();
    cout << "派生类指针 d4, d4->show():\n";
    d4->show();
    delete d4;

    //Derived d5 = b1;
    //Derived &d6 = b1;
    //Derived* d7 = &b1;
    //d7 = b3;

    return 0;
}