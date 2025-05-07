//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//    double x, y;
//public:
//    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}
//
//    // ǰ��++���������Ա������
//    Point& operator++() {
//        x++;
//        y++;
//        return *this;
//    }
//
//    // ˫Ŀ�����"-"����Ա������
//    Point operator-(const Point& p) const {
//        return Point(x - p.x, y - p.y);
//    }
//
//    // ��Ԫ��������"+"
//    friend Point operator+(const Point& p1, const Point& p2);
//    friend Point operator+(const Point& p, double d);
//
//    // ��Ԫ�������ز��������"<<"
//    friend ostream& operator<<(ostream& os, const Point& p);
//};
//
//// ʵ����Ԫ����"+"��Point + Point��
//Point operator+(const Point& p1, const Point& p2) {
//    return Point(p1.x + p2.x, p1.y + p2.y);
//}
//
//// ʵ����Ԫ����"+"��Point + double��
//Point operator+(const Point& p, double d) {
//    return Point(p.x + d, p.y + d);
//}
//
//// ʵ�ֲ��������"<<"
//ostream& operator<<(ostream& os, const Point& p) {
//    os << "(" << p.x << "," << p.y << ")\n";
//    return os;
//}
//
//int main() {
//    Point pt1(10.5, 20.8), pt2(-5.3, 18.4), pt3;
//    cout << "original pt1,pt2,pt3 are:\n" << pt1 << pt2 << pt3;
//
//    pt3 = pt1 + 100.8;
//    cout << "after pt3=pt1+100.8, pt3 is: " << pt3;
//
//    pt3 = pt1 + pt2;
//    cout << "after pt3=pt1+pt2, pt3 is: " << pt3;
//
//    pt3 = ++pt1;
//    ++pt2;
//    cout << "after ++pt1,pt2,pt3 are:\n" << pt1 << pt2 << pt3;
//
//    pt3 = pt1 - pt2;
//    cout << "after pt3=pt1-pt2, pt3 is: " << pt3;
//
//    return 0;
//}


#include <iostream>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    Point& operator++() {
        x++;
        y++;
        return *this;
    }

    Point operator-(const Point& p) const {
        return Point(x - p.x, y - p.y);
    }

    friend Point operator+(const Point& p1, const Point& p2);
    friend Point operator+(const Point& p, double d);
    friend ostream& operator<<(ostream& os, const Point& p);
};

Point operator+(const Point& p1, const Point& p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}

Point operator+(const Point& p, double d) {
    return Point(p.x + d, p.y + d);
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << "," << p.y << ")\n";
    return os;
}

int main() {
    Point a(1.1, 2.2), b(3.3, 4.4), c;
    cout << "Initial points:\n" << a << b << c;

    c = a + 5.5;
    cout << "After c = a + 5.5:\n" << c;

    c = a + b;
    cout << "After c = a + b:\n" << c;

    c = ++a;
    ++b;
    cout << "After ++a and ++b:\n" << a << b << c;

    c = a - b;
    cout << "After c = a - b:\n" << c;

    return 0;
}