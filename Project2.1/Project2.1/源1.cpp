//#include <iostream>
//
//using namespace std;
//
//class Vehicle {                                     //定义基类
//protected:
//	int MaxSpeed;                                   //最大速度
//	int Weight;                                     //最大重量
//public:
//	Vehicle(int m, int w) {                         //初始化成员变量的值
//		//（1）
//		//（2）
//		cout << "Constructing Vehicle…\n";
//	}
//
//	~Vehicle() {
//		cout << "Destructing Vehicle…\n";
//	}
//
//	void Run() {
//		cout << "The vehicle is running !\n";
//	}
//
//	void Stop(){
//		cout << "Please stop running!\n";
//	}
//
//	void Show() {
//		cout << "It\'s maxspees is :" << MaxSpeed << endl;
//		cout << "It's weight is:" << Weight << endl;
//	}
//};
//
//class Bicycle : public Vehicle {                    //定义派生类，公有继承
//protected:
//	int Height;                                     //高度，单位厘米
//public:
//	Bicycle(int m, int w, int h) :/*（3）*/{
//		/*（4）*/                                   //为本类中新增成员提供初始值
//		cout << "Constructing Bicycle…\n";         //调用基类构造函数
//	}
//
//	~Bicycle() {
//		cout << "Destruting Bycycle…\n";
//	}
//
//	void Show() {                                    //改造基类的Show函数
//		/*（5）*/                                    //调用基类 Show 输出 MaxSpeed 和 Weight 的值
//		/*（6）*/                                    //输出本类高度
//	}
//};
//
//int main() {
//	Bicycle /*（7）*/;                               //定义派生类对象
//	b.Run();                                         //观察构造、析构函数调用顺序
//	b.Stop();
//	b.Show();
//
//	return 0;
//}

//class Car : public Vehicle {                         //定义派生类 Car ，公有继承
//protected:
//	int SeatNum;                                     //座位数
//	Car(int m, int w, int s) : /*（8）*/{			 //调用基类构造函数
//		/*（9）*/									 //从本类中新增成员提供初始值
//		cout << "Constructing Car…\n";
//	}
//
//	~Car() {
//		cout << "Destructing Car…\n";
//	}
//
//	void Show() {                                     //改造基类的 Show 函数
//		/*（10）*/ //调用基类 Show 输出 MaxSpeed 和 Weight 的值
//		/*（11）*/                                    //输出本类座位数
//	}
//};

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // 定义基类
//protected:
//    int MaxSpeed;                                   // 最大速度
//    int Weight;                                     // 最大重量
//public:
//    Vehicle(int m, int w) {                         // 初始化成员变量的值
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle…\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle…\n";
//    }
//
//    void Run() {
//        cout << "The vehicle is running !\n";
//    }
//
//    void Stop() {
//        cout << "Please stop running!\n";
//    }
//
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : public Vehicle {                    // 定义派生类，公有继承
//protected:
//    int Height;                                     // 高度，单位厘米
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) 调用基类构造函数
//        Height = h;                                 // (4) 初始化派生类成员
//        cout << "Constructing Bicycle…\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle…\n";
//    }
//
//    void Show() {                                    // 重写基类的 Show 函数
//        Vehicle::Show();                             // (5) 调用基类 Show 方法
//        cout << "It's height is: " << Height << "cm" << endl; // (6) 输出派生类成员
//    }
//};
//
//int main() {
//    Bicycle b(30, 100, 50);                         // (7) 定义派生类对象
//    b.Run();                                         // 调用基类方法
//    b.Stop();
//    b.Show();                                        // 调用派生类重写的 Show 方法
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // 定义基类
//protected:
//    int MaxSpeed;                                   // 最大速度
//    int Weight;                                     // 最大重量
//public:
//    Vehicle(int m, int w) {                         // 初始化成员变量的值
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle…\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle…\n";
//    }
//
//    void Run() {
//        cout << "The vehicle is running !\n";
//    }
//
//    void Stop() {
//        cout << "Please stop running!\n";
//    }
//
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : public Vehicle {                    // 定义派生类，公有继承
//protected:
//    int Height;                                     // 高度，单位厘米
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) 调用基类构造函数
//        Height = h;                                 // (4) 初始化派生类成员
//        cout << "Constructing Bicycle…\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle…\n";
//    }
//
//    void Show() {                                    // 重写基类的 Show 函数
//        Vehicle::Show();                             // (5) 调用基类 Show 方法
//        cout << "It's height is: " << Height << "cm" << endl; // (6) 输出派生类成员
//    }
//};
//
//class Car : public Vehicle {                         //定义派生类 Car ，公有继承
//protected:
//    int SeatNum;                                     //座位数
//    Car(int m, int w, int s) : /*（8）*/{			 //调用基类构造函数
//        /*（9）*/									 //从本类中新增成员提供初始值
//        cout << "Constructing Car…\n";
//    }
//
//    ~Car() {
//        cout << "Destructing Car…\n";
//    }
//
//    void Show() {                                     //改造基类的 Show 函数
//        /*（10）*/ //调用基类 Show 输出 MaxSpeed 和 Weight 的值
//        /*（11）*/                                    //输出本类座位数
//    }
//};
//
//int main() {
//    Bicycle /*（12）*/                               // 定义自行车类对象
//    b.Run();                                         // 调用基类方法
//    b.Stop();
//    b.Show();                                        // 调用派生类重写的 Show 方法
//
//    Car /*（13）*/                                   //定义汽车类对象
//    c.Run();
//    c.Stop();
//    c.Show();
//
//    return 0;
//}

//class MotorCycle : public Bicycle, public Car {        //第3层类
//public:
//    MotorCycle(int m, int w, int h, int s) : /*（14）*/ {//调用基类构造函数
//        cout << "Constructing MotorCycle…\n";
//    }
//
//    ~MotorCycle() {
//        cout << "Destructing MotorCycle…\n";
//    }
//
//    void Show() {                                      //输出4个成员变量的信息，需要消除消息二义性
//        cout << "It\'s maxspeed is:" << MaxSpeed << endl; //错误
//        cout << "It\'s weight is:" << Weight << endl;  //错误
//        cout << "It\'s height is:" << Height << endl;
//        cout << "It\'s seatnum is:" << SeatNum << endl;
//    }
//};

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // 定义基类
//protected:
//    int MaxSpeed;                                   // 最大速度
//    int Weight;                                     // 最大重量
//public:
//    Vehicle(int m, int w) {                         // 初始化成员变量的值
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle…\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle…\n";
//    }
//
//    void Run() {
//        cout << "The vehicle is running !\n";
//    }
//
//    void Stop() {
//        cout << "Please stop running!\n";
//    }
//
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : public Vehicle {                    // 定义派生类，公有继承
//protected:
//    int Height;                                     // 高度，单位厘米
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) 调用基类构造函数
//        Height = h;                                 // (4) 初始化派生类成员
//        cout << "Constructing Bicycle…\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle…\n";
//    }
//
//    void Show() {                                    // 重写基类的 Show 函数
//        Vehicle::Show();                             // (5) 调用基类 Show 方法
//        cout << "It's height is: " << Height << "cm" << endl; // (6) 输出派生类成员
//    }
//};
//
//class Car : public Vehicle {
//protected:
//    int SeatNum;
//public:  // 将构造函数改为public
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {  // (8) 调用基类构造函数
//        cout << "Constructing Car…\n";               // (9) 初始化SeatNum
//    }
//
//    ~Car() {
//        cout << "Destructing Car…\n";
//    }
//
//    void Show() {
//        Vehicle::Show();                              // (10) 调用基类Show方法
//        cout << "Seat number is: " << SeatNum << endl; // (11) 输出座位数
//    }
//};
//
//int main() {
//    Bicycle b(30, 100, 50);                          // (12) 定义自行车对象
//    b.Run();
//    b.Stop();
//    b.Show();
//
//    Car c(120, 1500, 5);                             // (13) 定义汽车对象
//    c.Run();
//    c.Stop();
//    c.Show();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // 定义基类
//protected:
//    int MaxSpeed;                                   // 最大速度
//    int Weight;                                     // 最大重量
//public:
//    Vehicle(int m, int w) {                         // 初始化成员变量的值
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle…\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle…\n";
//    }
//
//    void Run() {
//        cout << "The vehicle is running !\n";
//    }
//
//    void Stop() {
//        cout << "Please stop running!\n";
//    }
//
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : public Vehicle {                    // 定义派生类，公有继承
//protected:
//    int Height;                                     // 高度，单位厘米
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) 调用基类构造函数
//        Height = h;                                 // (4) 初始化派生类成员
//        cout << "Constructing Bicycle…\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle…\n";
//    }
//
//    void Show() {                                    // 重写基类的 Show 函数
//        Vehicle::Show();                             // (5) 调用基类 Show 方法
//        cout << "It's height is: " << Height << "cm" << endl; // (6) 输出派生类成员
//    }
//};
//
//class Car : public Vehicle {
//protected:
//    int SeatNum;
//public:  // 将构造函数改为public
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {  // (8) 调用基类构造函数
//        cout << "Constructing Car…\n";               // (9) 初始化SeatNum
//    }
//
//    ~Car() {
//        cout << "Destructing Car…\n";
//    }
//
//    void Show() {
//        Vehicle::Show();                              // (10) 调用基类Show方法
//        cout << "Seat number is: " << SeatNum << endl; // (11) 输出座位数
//    }
//};
//
//class MotorCycle : public Bicycle, public Car {        //第3层类
//public:
//    MotorCycle(int m, int w, int h, int s) : /*（14）*/ //调用基类构造函数
//    {
//        cout << "Constructing MotorCycle…\n";
//    }
//
//    ~MotorCycle() {
//        cout << "Destructing MotorCycle…\n";
//    }
//
//    void Show() {                                      //输出4个成员变量的信息，需要消除消息二义性
//        cout << "It\'s maxspeed is:" << MaxSpeed << endl; //错误
//        cout << "It\'s weight is:" << Weight << endl;  //错误
//        cout << "It\'s height is:" << Height << endl;
//        cout << "It\'s seatnum is:" << SeatNum << endl;
//    }
//};
//
//int main() {
//    MotorCycle /*（15）*/                              //定义摩托车类对象
//        mc.Run();                                          //错误
//    mc.Stop();                                         //错误
//    mc.Show();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {
//protected:
//    int MaxSpeed;
//    int Weight;
//public:
//    Vehicle(int m, int w) : MaxSpeed(m), Weight(w) {
//        cout << "Constructing Vehicle…\n";
//    }
//    ~Vehicle() { cout << "Destructing Vehicle…\n"; }
//    void Run() { cout << "The vehicle is running !\n"; }
//    void Stop() { cout << "Please stop running!\n"; }
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : virtual public Vehicle {           // 虚继承
//protected:
//    int Height;
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w), Height(h) {
//        cout << "Constructing Bicycle…\n";
//    }
//    ~Bicycle() { cout << "Destructing Bicycle…\n"; }
//};
//
//class Car : virtual public Vehicle {               // 虚继承
//protected:
//    int SeatNum;
//public:
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {
//        cout << "Constructing Car…\n";
//    }
//    ~Car() { cout << "Destructing Car…\n"; }
//};
//
//class MotorCycle : public Bicycle, public Car {
//public:
//    // (14) 正确初始化列表：显式调用虚基类构造函数
//    MotorCycle(int m, int w, int h, int s)
//        : Vehicle(m, w), Bicycle(m, w, h), Car(m, w, s) {
//        // 初始化列表显式调用虚基类 Vehicle 的构造函数
//        cout << "Constructing MotorCycle…\n";
//    }
//    ~MotorCycle() { cout << "Destructing MotorCycle…\n"; }
//
//    void Show() {
//        // 直接访问唯一基类成员
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//        cout << "It's height is: " << Height << endl;
//        cout << "It's seatnum is: " << SeatNum << endl;
//    }
//};
//
//int main() {
//    // (15) 正确对象定义
//    MotorCycle mc(120, 200, 80, 2);
//    mc.Run();   // 正确调用基类方法
//    mc.Stop();
//    mc.Show();
//    return 0;
//}

#include <iostream>
using namespace std;

class Vehicle {
protected:
    int MaxSpeed;
    int Weight;
public:
    Vehicle(int m, int w) : MaxSpeed(m), Weight(w) {
        cout << "Constructing Vehicle…\n";
    }
    ~Vehicle() { cout << "Destructing Vehicle…\n"; }
    void Run() { cout << "The vehicle is running !\n"; }
    void Stop() { cout << "Please stop running!\n"; }
    void Show() {
        cout << "It's maxspeed is: " << MaxSpeed << endl;
        cout << "It's weight is: " << Weight << endl;
    }
};

class Bicycle : virtual public Vehicle {           // 虚继承
protected:
    int Height;
public:
    Bicycle(int m, int w, int h) : Vehicle(m, w), Height(h) {
        cout << "Constructing Bicycle…\n";
    }
    ~Bicycle() { cout << "Destructing Bicycle…\n"; }
};

class Car : virtual public Vehicle {               // 虚继承
protected:
    int SeatNum;
public:
    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {
        cout << "Constructing Car…\n";
    }
    ~Car() { cout << "Destructing Car…\n"; }
};

class MotorCycle : public Bicycle, public Car {
public:
    // (14) 正确初始化列表：显式调用虚基类构造函数
    MotorCycle(int m, int w, int h, int s)
        : Vehicle(m, w), Bicycle(m, w, h), Car(m, w, s) {
        // 初始化列表显式调用虚基类 Vehicle 的构造函数
        cout << "Constructing MotorCycle…\n";
    }
    ~MotorCycle() { cout << "Destructing MotorCycle…\n"; }

    void Show() {
        // 直接访问唯一基类成员
        cout << "It's maxspeed is: " << MaxSpeed << endl;
        cout << "It's weight is: " << Weight << endl;
        cout << "It's height is: " << Height << endl;
        cout << "It's seatnum is: " << SeatNum << endl;
    }
};

int main() {
    // (15) 正确对象定义
    MotorCycle mc(120, 200, 80, 2);
    mc.Run();   // 正确调用基类方法
    mc.Stop();
    mc.Show();
    return 0;
}


