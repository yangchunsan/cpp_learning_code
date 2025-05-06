//#include <iostream>
//using namespace std;
//
//class Time {
//private:
//    int Hour;
//    int Minute;
//    int Second;
//
//public:
//    // 构造函数
//    Time(int h = 0, int m = 0, int s = 0) : Hour(h), Minute(m), Second(s) {}
//
//    // 拷贝构造函数
//    Time(const Time& t) : Hour(t.Hour), Minute(t.Minute), Second(t.Second) {
//        cout << "Copy constructor called" << endl;
//    }
//
//    // 析构函数
//    ~Time() {
//        cout << "Destructor called" << endl;
//    }
//
//    // 设置时间
//    void SetTime(int h, int m, int s) {
//        Hour = h;
//        Minute = m;
//        Second = s;
//    }
//
//    // 获取时间
//    void PrintTime() {
//        cout << Hour << ":" << Minute << ":" << Second << endl;
//    }
//
//    // 增加一秒
//    void IncreaseOneSecond() {
//        Second++;
//        if (Second >= 60) {
//            Second = 0;
//            Minute++;
//            if (Minute >= 60) {
//                Minute = 0;
//                Hour++;
//                if (Hour >= 24) {
//                    Hour = 0;
//                }
//            }
//        }
//    }
//};
//
//void f(Time t) {
//    t.PrintTime();
//}
//
//int main() {
//    Time t1(12, 30, 59);
//    t1.PrintTime();
//    t1.IncreaseOneSecond();
//    t1.PrintTime();
//
//    Time t2;
//    f(t2);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int Hour, Minute, Second;
//public:
//	Time(int h = 0, int m = 0, int n = 0);        //构造函数，初始化类的三个成员变量
//	Time(const Time& ob);                         //复制构造函数
//	~Time();                                      //析构函数
//	void ChangeTime(int h, int m, int s);         //用形参的值改变成员变量值
//	int GetHour();                                //获取小时值，以24小时计
//	int GetMinute();                              //获取分钟值
//	int GetSecond();                              //获取秒值
//	void PrintTime();                             //输出时间值，以时;分;秒 形式输出
//	//void IncreaceOneSecond();  //此函数增加一秒，做（3）题时取消注释标志
//};
//
//Time::Time(int h, int m, int n) {
//	//cout << "Constructing..." << endl;          //观察函数执行时取消注释
//	//其他语句请补充
//}
//
//Time::Time(const Time& ob) {
//	//观察构造函数执行顺序时取消注释标志
//	//cout << "Copy constructing..." << endl;
//	//其他语句，请补充完整
//}
//
//Time::~Time() {
//	//cout << "Desttucting..." << endl;            //观察构造函数执行顺序时取消注释标志
//	//其他语句，请补充完整              
//
//}
//
////其他成员函数的实现代码，请补充完整
//
///*void f(Time t){                                  //普通函数f,做（4）题时取消注释标志
//t.PrintTime();
//cout << "call f\n";
//}*/
//
//int main() {
//	//定义四个对象，分别提供0，1，2，3个实参
//
//	对象名.PrintTime();
//	对象名.ChangeTime(实参表);
//	cout << 对象名.GetHour() << ":" << 对象名.GetMinute() << ":" << 对象名.GetSecond() << endl; 
//	//输出时间信息
//	//可以补充其他语句，主函数的内容组织根据个人需要，保证正确
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Time {
private:
    int Hour, Minute, Second;

public:
    // 构造函数
    Time(int h = 0, int m = 0, int s = 0) {
        Hour = h;
        Minute = m;
        Second = s;
        cout << "Constructing..." << endl;
    }

    // 拷贝构造函数
    Time(const Time& ob) {
        Hour = ob.Hour;
        Minute = ob.Minute;
        Second = ob.Second;
        cout << "Copy constructing..." << endl;
    }

    // 析构函数
    ~Time() {
        cout << "Destructing..." << endl;
    }

    // 设置时间
    void ChangeTime(int h, int m, int s) {
        Hour = h;
        Minute = m;
        Second = s;
    }

    // 获取小时
    int GetHour() {
        return Hour;
    }

    // 获取分钟
    int GetMinute() {
        return Minute;
    }

    // 获取秒
    int GetSecond() {
        return Second;
    }

    // 输出时间
    void PrintTime() {
        cout << Hour << ":" << Minute << ":" << Second << endl;
    }

    // 增加一秒
    void IncreaseOneSecond() {
        Second++;
        if (Second >= 60) {
            Second = 0;
            Minute++;
            if (Minute >= 60) {
                Minute = 0;
                Hour++;
                if (Hour >= 24) {
                    Hour = 0;
                }
            }
        }
    }
};

void f(Time t) {
    t.PrintTime();
    cout << "call f\n";
}

int main() {
    // 定义四个对象，分别提供0，1，2，3个实参
    Time t0; // 默认构造函数
    Time t1(12); // 提供1个实参
    Time t2(12, 30); // 提供2个实参
    Time t3(12, 30, 45); // 提供3个实参

    // 输出时间
    t0.PrintTime();
    t1.PrintTime();
    t2.PrintTime();
    t3.PrintTime();

    // 调用ChangeTime函数
    t3.ChangeTime(13, 45, 59);
    cout << "After ChangeTime: ";
    t3.PrintTime();

    // 调用IncreaseOneSecond函数
    t3.IncreaseOneSecond();
    cout << "After IncreaseOneSecond: ";
    t3.PrintTime();

    // 调用f函数
    f(t3);

    return 0;
}