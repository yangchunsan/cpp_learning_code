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
//    // ���캯��
//    Time(int h = 0, int m = 0, int s = 0) : Hour(h), Minute(m), Second(s) {}
//
//    // �������캯��
//    Time(const Time& t) : Hour(t.Hour), Minute(t.Minute), Second(t.Second) {
//        cout << "Copy constructor called" << endl;
//    }
//
//    // ��������
//    ~Time() {
//        cout << "Destructor called" << endl;
//    }
//
//    // ����ʱ��
//    void SetTime(int h, int m, int s) {
//        Hour = h;
//        Minute = m;
//        Second = s;
//    }
//
//    // ��ȡʱ��
//    void PrintTime() {
//        cout << Hour << ":" << Minute << ":" << Second << endl;
//    }
//
//    // ����һ��
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
//	Time(int h = 0, int m = 0, int n = 0);        //���캯������ʼ�����������Ա����
//	Time(const Time& ob);                         //���ƹ��캯��
//	~Time();                                      //��������
//	void ChangeTime(int h, int m, int s);         //���βε�ֵ�ı��Ա����ֵ
//	int GetHour();                                //��ȡСʱֵ����24Сʱ��
//	int GetMinute();                              //��ȡ����ֵ
//	int GetSecond();                              //��ȡ��ֵ
//	void PrintTime();                             //���ʱ��ֵ����ʱ;��;�� ��ʽ���
//	//void IncreaceOneSecond();  //�˺�������һ�룬����3����ʱȡ��ע�ͱ�־
//};
//
//Time::Time(int h, int m, int n) {
//	//cout << "Constructing..." << endl;          //�۲캯��ִ��ʱȡ��ע��
//	//��������벹��
//}
//
//Time::Time(const Time& ob) {
//	//�۲칹�캯��ִ��˳��ʱȡ��ע�ͱ�־
//	//cout << "Copy constructing..." << endl;
//	//������䣬�벹������
//}
//
//Time::~Time() {
//	//cout << "Desttucting..." << endl;            //�۲칹�캯��ִ��˳��ʱȡ��ע�ͱ�־
//	//������䣬�벹������              
//
//}
//
////������Ա������ʵ�ִ��룬�벹������
//
///*void f(Time t){                                  //��ͨ����f,����4����ʱȡ��ע�ͱ�־
//t.PrintTime();
//cout << "call f\n";
//}*/
//
//int main() {
//	//�����ĸ����󣬷ֱ��ṩ0��1��2��3��ʵ��
//
//	������.PrintTime();
//	������.ChangeTime(ʵ�α�);
//	cout << ������.GetHour() << ":" << ������.GetMinute() << ":" << ������.GetSecond() << endl; 
//	//���ʱ����Ϣ
//	//���Բ���������䣬��������������֯���ݸ�����Ҫ����֤��ȷ
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Time {
private:
    int Hour, Minute, Second;

public:
    // ���캯��
    Time(int h = 0, int m = 0, int s = 0) {
        Hour = h;
        Minute = m;
        Second = s;
        cout << "Constructing..." << endl;
    }

    // �������캯��
    Time(const Time& ob) {
        Hour = ob.Hour;
        Minute = ob.Minute;
        Second = ob.Second;
        cout << "Copy constructing..." << endl;
    }

    // ��������
    ~Time() {
        cout << "Destructing..." << endl;
    }

    // ����ʱ��
    void ChangeTime(int h, int m, int s) {
        Hour = h;
        Minute = m;
        Second = s;
    }

    // ��ȡСʱ
    int GetHour() {
        return Hour;
    }

    // ��ȡ����
    int GetMinute() {
        return Minute;
    }

    // ��ȡ��
    int GetSecond() {
        return Second;
    }

    // ���ʱ��
    void PrintTime() {
        cout << Hour << ":" << Minute << ":" << Second << endl;
    }

    // ����һ��
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
    // �����ĸ����󣬷ֱ��ṩ0��1��2��3��ʵ��
    Time t0; // Ĭ�Ϲ��캯��
    Time t1(12); // �ṩ1��ʵ��
    Time t2(12, 30); // �ṩ2��ʵ��
    Time t3(12, 30, 45); // �ṩ3��ʵ��

    // ���ʱ��
    t0.PrintTime();
    t1.PrintTime();
    t2.PrintTime();
    t3.PrintTime();

    // ����ChangeTime����
    t3.ChangeTime(13, 45, 59);
    cout << "After ChangeTime: ";
    t3.PrintTime();

    // ����IncreaseOneSecond����
    t3.IncreaseOneSecond();
    cout << "After IncreaseOneSecond: ";
    t3.PrintTime();

    // ����f����
    f(t3);

    return 0;
}