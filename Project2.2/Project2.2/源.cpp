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
//	Base /*��1��*/;                                            //����������b1
//	cout << "������� b1.show():\n";
//	b1.show();
//	Derived /*��2��*/;                                         //�������������d1
//	/*��3��*/;                                                 //���������������ำֵ
//	cout << "���� b1 = b1, b1.show():\n";
//	b1.show;
//	cout << "��������� d1.show():\n";
//	d1.show();
//	Base /*��4��*/;                                            //���������������ʼ����������
//	cout << "���� b2 = d1, b2.show():\n";
//	b2.show();
//	Base /*��5��*/;                                            //���������ĵ�ַ����ָ������ָ��
//	cout << "����ָ�� b3 = &d1, b3->show():\n";
//	b3->show();
//	Derived* d4 = /*��6��*/;                                   //����������ָ�벢�����¶���
//	Base* b4 = d4;                                             //������ָ�븳�������ָ��
//	cout << "����ָ�� b4 = d4, b4->show():\n";
//	b4->show();
//	cout << "������ָ�� d4, d4->show():\n";
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
    // (1) ���������� b1����ʼ��ֵΪ 10
    Base b1(10);
    cout << "������� b1.show():\n";
    b1.show();

    // (2) ������������� d1����ʼ��ֵΪ 20
    Derived d1(20);

    // (3) �������������������ֵ��������Ƭ��
    b1 = d1;
    cout << "��ֵ�� b1.show():\n";
    b1.show();

    // (4) ������������ʼ����������
    Base &b2 = d1;
    cout << "���� b2 = d1, b2.show():\n";
    b2.show();

    // (5) ���������ĵ�ַ��������ָ��
    Base *b3 = &d1;
    cout << "����ָ�� b3 = &d1, b3->show():\n";
    b3->show();

    // (6) ��̬������������󲢸�ֵ��������ָ��
    Derived* d4 = new Derived(30);
    Base* b4 = d4;
    cout << "����ָ�� b4 = d4, b4->show():\n";
    b4->show();
    cout << "������ָ�� d4, d4->show():\n";
    d4->show();
    delete d4;

    //Derived d5 = b1;
    //Derived &d6 = b1;
    //Derived* d7 = &b1;
    //d7 = b3;

    return 0;
}