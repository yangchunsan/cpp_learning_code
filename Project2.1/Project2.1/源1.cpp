//#include <iostream>
//
//using namespace std;
//
//class Vehicle {                                     //�������
//protected:
//	int MaxSpeed;                                   //����ٶ�
//	int Weight;                                     //�������
//public:
//	Vehicle(int m, int w) {                         //��ʼ����Ա������ֵ
//		//��1��
//		//��2��
//		cout << "Constructing Vehicle��\n";
//	}
//
//	~Vehicle() {
//		cout << "Destructing Vehicle��\n";
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
//class Bicycle : public Vehicle {                    //���������࣬���м̳�
//protected:
//	int Height;                                     //�߶ȣ���λ����
//public:
//	Bicycle(int m, int w, int h) :/*��3��*/{
//		/*��4��*/                                   //Ϊ������������Ա�ṩ��ʼֵ
//		cout << "Constructing Bicycle��\n";         //���û��๹�캯��
//	}
//
//	~Bicycle() {
//		cout << "Destruting Bycycle��\n";
//	}
//
//	void Show() {                                    //��������Show����
//		/*��5��*/                                    //���û��� Show ��� MaxSpeed �� Weight ��ֵ
//		/*��6��*/                                    //�������߶�
//	}
//};
//
//int main() {
//	Bicycle /*��7��*/;                               //�������������
//	b.Run();                                         //�۲칹�졢������������˳��
//	b.Stop();
//	b.Show();
//
//	return 0;
//}

//class Car : public Vehicle {                         //���������� Car �����м̳�
//protected:
//	int SeatNum;                                     //��λ��
//	Car(int m, int w, int s) : /*��8��*/{			 //���û��๹�캯��
//		/*��9��*/									 //�ӱ�����������Ա�ṩ��ʼֵ
//		cout << "Constructing Car��\n";
//	}
//
//	~Car() {
//		cout << "Destructing Car��\n";
//	}
//
//	void Show() {                                     //�������� Show ����
//		/*��10��*/ //���û��� Show ��� MaxSpeed �� Weight ��ֵ
//		/*��11��*/                                    //���������λ��
//	}
//};

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // �������
//protected:
//    int MaxSpeed;                                   // ����ٶ�
//    int Weight;                                     // �������
//public:
//    Vehicle(int m, int w) {                         // ��ʼ����Ա������ֵ
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle��\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle��\n";
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
//class Bicycle : public Vehicle {                    // ���������࣬���м̳�
//protected:
//    int Height;                                     // �߶ȣ���λ����
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) ���û��๹�캯��
//        Height = h;                                 // (4) ��ʼ���������Ա
//        cout << "Constructing Bicycle��\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle��\n";
//    }
//
//    void Show() {                                    // ��д����� Show ����
//        Vehicle::Show();                             // (5) ���û��� Show ����
//        cout << "It's height is: " << Height << "cm" << endl; // (6) ����������Ա
//    }
//};
//
//int main() {
//    Bicycle b(30, 100, 50);                         // (7) �������������
//    b.Run();                                         // ���û��෽��
//    b.Stop();
//    b.Show();                                        // ������������д�� Show ����
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // �������
//protected:
//    int MaxSpeed;                                   // ����ٶ�
//    int Weight;                                     // �������
//public:
//    Vehicle(int m, int w) {                         // ��ʼ����Ա������ֵ
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle��\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle��\n";
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
//class Bicycle : public Vehicle {                    // ���������࣬���м̳�
//protected:
//    int Height;                                     // �߶ȣ���λ����
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) ���û��๹�캯��
//        Height = h;                                 // (4) ��ʼ���������Ա
//        cout << "Constructing Bicycle��\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle��\n";
//    }
//
//    void Show() {                                    // ��д����� Show ����
//        Vehicle::Show();                             // (5) ���û��� Show ����
//        cout << "It's height is: " << Height << "cm" << endl; // (6) ����������Ա
//    }
//};
//
//class Car : public Vehicle {                         //���������� Car �����м̳�
//protected:
//    int SeatNum;                                     //��λ��
//    Car(int m, int w, int s) : /*��8��*/{			 //���û��๹�캯��
//        /*��9��*/									 //�ӱ�����������Ա�ṩ��ʼֵ
//        cout << "Constructing Car��\n";
//    }
//
//    ~Car() {
//        cout << "Destructing Car��\n";
//    }
//
//    void Show() {                                     //�������� Show ����
//        /*��10��*/ //���û��� Show ��� MaxSpeed �� Weight ��ֵ
//        /*��11��*/                                    //���������λ��
//    }
//};
//
//int main() {
//    Bicycle /*��12��*/                               // �������г������
//    b.Run();                                         // ���û��෽��
//    b.Stop();
//    b.Show();                                        // ������������д�� Show ����
//
//    Car /*��13��*/                                   //�������������
//    c.Run();
//    c.Stop();
//    c.Show();
//
//    return 0;
//}

//class MotorCycle : public Bicycle, public Car {        //��3����
//public:
//    MotorCycle(int m, int w, int h, int s) : /*��14��*/ {//���û��๹�캯��
//        cout << "Constructing MotorCycle��\n";
//    }
//
//    ~MotorCycle() {
//        cout << "Destructing MotorCycle��\n";
//    }
//
//    void Show() {                                      //���4����Ա��������Ϣ����Ҫ������Ϣ������
//        cout << "It\'s maxspeed is:" << MaxSpeed << endl; //����
//        cout << "It\'s weight is:" << Weight << endl;  //����
//        cout << "It\'s height is:" << Height << endl;
//        cout << "It\'s seatnum is:" << SeatNum << endl;
//    }
//};

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // �������
//protected:
//    int MaxSpeed;                                   // ����ٶ�
//    int Weight;                                     // �������
//public:
//    Vehicle(int m, int w) {                         // ��ʼ����Ա������ֵ
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle��\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle��\n";
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
//class Bicycle : public Vehicle {                    // ���������࣬���м̳�
//protected:
//    int Height;                                     // �߶ȣ���λ����
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) ���û��๹�캯��
//        Height = h;                                 // (4) ��ʼ���������Ա
//        cout << "Constructing Bicycle��\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle��\n";
//    }
//
//    void Show() {                                    // ��д����� Show ����
//        Vehicle::Show();                             // (5) ���û��� Show ����
//        cout << "It's height is: " << Height << "cm" << endl; // (6) ����������Ա
//    }
//};
//
//class Car : public Vehicle {
//protected:
//    int SeatNum;
//public:  // �����캯����Ϊpublic
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {  // (8) ���û��๹�캯��
//        cout << "Constructing Car��\n";               // (9) ��ʼ��SeatNum
//    }
//
//    ~Car() {
//        cout << "Destructing Car��\n";
//    }
//
//    void Show() {
//        Vehicle::Show();                              // (10) ���û���Show����
//        cout << "Seat number is: " << SeatNum << endl; // (11) �����λ��
//    }
//};
//
//int main() {
//    Bicycle b(30, 100, 50);                          // (12) �������г�����
//    b.Run();
//    b.Stop();
//    b.Show();
//
//    Car c(120, 1500, 5);                             // (13) ������������
//    c.Run();
//    c.Stop();
//    c.Show();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Vehicle {                                     // �������
//protected:
//    int MaxSpeed;                                   // ����ٶ�
//    int Weight;                                     // �������
//public:
//    Vehicle(int m, int w) {                         // ��ʼ����Ա������ֵ
//        MaxSpeed = m;                               // (1)
//        Weight = w;                                 // (2)
//        cout << "Constructing Vehicle��\n";
//    }
//
//    ~Vehicle() {
//        cout << "Destructing Vehicle��\n";
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
//class Bicycle : public Vehicle {                    // ���������࣬���м̳�
//protected:
//    int Height;                                     // �߶ȣ���λ����
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w) {  // (3) ���û��๹�캯��
//        Height = h;                                 // (4) ��ʼ���������Ա
//        cout << "Constructing Bicycle��\n";
//    }
//
//    ~Bicycle() {
//        cout << "Destructing Bicycle��\n";
//    }
//
//    void Show() {                                    // ��д����� Show ����
//        Vehicle::Show();                             // (5) ���û��� Show ����
//        cout << "It's height is: " << Height << "cm" << endl; // (6) ����������Ա
//    }
//};
//
//class Car : public Vehicle {
//protected:
//    int SeatNum;
//public:  // �����캯����Ϊpublic
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {  // (8) ���û��๹�캯��
//        cout << "Constructing Car��\n";               // (9) ��ʼ��SeatNum
//    }
//
//    ~Car() {
//        cout << "Destructing Car��\n";
//    }
//
//    void Show() {
//        Vehicle::Show();                              // (10) ���û���Show����
//        cout << "Seat number is: " << SeatNum << endl; // (11) �����λ��
//    }
//};
//
//class MotorCycle : public Bicycle, public Car {        //��3����
//public:
//    MotorCycle(int m, int w, int h, int s) : /*��14��*/ //���û��๹�캯��
//    {
//        cout << "Constructing MotorCycle��\n";
//    }
//
//    ~MotorCycle() {
//        cout << "Destructing MotorCycle��\n";
//    }
//
//    void Show() {                                      //���4����Ա��������Ϣ����Ҫ������Ϣ������
//        cout << "It\'s maxspeed is:" << MaxSpeed << endl; //����
//        cout << "It\'s weight is:" << Weight << endl;  //����
//        cout << "It\'s height is:" << Height << endl;
//        cout << "It\'s seatnum is:" << SeatNum << endl;
//    }
//};
//
//int main() {
//    MotorCycle /*��15��*/                              //����Ħ�г������
//        mc.Run();                                          //����
//    mc.Stop();                                         //����
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
//        cout << "Constructing Vehicle��\n";
//    }
//    ~Vehicle() { cout << "Destructing Vehicle��\n"; }
//    void Run() { cout << "The vehicle is running !\n"; }
//    void Stop() { cout << "Please stop running!\n"; }
//    void Show() {
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//    }
//};
//
//class Bicycle : virtual public Vehicle {           // ��̳�
//protected:
//    int Height;
//public:
//    Bicycle(int m, int w, int h) : Vehicle(m, w), Height(h) {
//        cout << "Constructing Bicycle��\n";
//    }
//    ~Bicycle() { cout << "Destructing Bicycle��\n"; }
//};
//
//class Car : virtual public Vehicle {               // ��̳�
//protected:
//    int SeatNum;
//public:
//    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {
//        cout << "Constructing Car��\n";
//    }
//    ~Car() { cout << "Destructing Car��\n"; }
//};
//
//class MotorCycle : public Bicycle, public Car {
//public:
//    // (14) ��ȷ��ʼ���б���ʽ��������๹�캯��
//    MotorCycle(int m, int w, int h, int s)
//        : Vehicle(m, w), Bicycle(m, w, h), Car(m, w, s) {
//        // ��ʼ���б���ʽ��������� Vehicle �Ĺ��캯��
//        cout << "Constructing MotorCycle��\n";
//    }
//    ~MotorCycle() { cout << "Destructing MotorCycle��\n"; }
//
//    void Show() {
//        // ֱ�ӷ���Ψһ�����Ա
//        cout << "It's maxspeed is: " << MaxSpeed << endl;
//        cout << "It's weight is: " << Weight << endl;
//        cout << "It's height is: " << Height << endl;
//        cout << "It's seatnum is: " << SeatNum << endl;
//    }
//};
//
//int main() {
//    // (15) ��ȷ������
//    MotorCycle mc(120, 200, 80, 2);
//    mc.Run();   // ��ȷ���û��෽��
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
        cout << "Constructing Vehicle��\n";
    }
    ~Vehicle() { cout << "Destructing Vehicle��\n"; }
    void Run() { cout << "The vehicle is running !\n"; }
    void Stop() { cout << "Please stop running!\n"; }
    void Show() {
        cout << "It's maxspeed is: " << MaxSpeed << endl;
        cout << "It's weight is: " << Weight << endl;
    }
};

class Bicycle : virtual public Vehicle {           // ��̳�
protected:
    int Height;
public:
    Bicycle(int m, int w, int h) : Vehicle(m, w), Height(h) {
        cout << "Constructing Bicycle��\n";
    }
    ~Bicycle() { cout << "Destructing Bicycle��\n"; }
};

class Car : virtual public Vehicle {               // ��̳�
protected:
    int SeatNum;
public:
    Car(int m, int w, int s) : Vehicle(m, w), SeatNum(s) {
        cout << "Constructing Car��\n";
    }
    ~Car() { cout << "Destructing Car��\n"; }
};

class MotorCycle : public Bicycle, public Car {
public:
    // (14) ��ȷ��ʼ���б���ʽ��������๹�캯��
    MotorCycle(int m, int w, int h, int s)
        : Vehicle(m, w), Bicycle(m, w, h), Car(m, w, s) {
        // ��ʼ���б���ʽ��������� Vehicle �Ĺ��캯��
        cout << "Constructing MotorCycle��\n";
    }
    ~MotorCycle() { cout << "Destructing MotorCycle��\n"; }

    void Show() {
        // ֱ�ӷ���Ψһ�����Ա
        cout << "It's maxspeed is: " << MaxSpeed << endl;
        cout << "It's weight is: " << Weight << endl;
        cout << "It's height is: " << Height << endl;
        cout << "It's seatnum is: " << SeatNum << endl;
    }
};

int main() {
    // (15) ��ȷ������
    MotorCycle mc(120, 200, 80, 2);
    mc.Run();   // ��ȷ���û��෽��
    mc.Stop();
    mc.Show();
    return 0;
}


