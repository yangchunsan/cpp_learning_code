#define _USE_MATH_DEFINES   
#include <cmath>            
#include <iostream>

using namespace std;

// ������ࣺ������
class Container {
public:
    virtual double surfaceArea() = 0;   // ���麯����������
    virtual double volume() = 0;       // ���麯���������
    virtual void print() = 0;          // ���麯���������Ϣ
};

// �������ࣨ�̳���Container��
class Cube : public Container {
private:
    double side;
public:
    Cube(double s) : side(s) {}
    double surfaceArea() override { return 6 * side * side; }
    double volume() override { return side * side * side; }
    void print() override { cout << "Cube: side = " << side << endl; }
};

// �����ࣨ�̳���Container��
class Sphere : public Container {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double surfaceArea() override { return 4 * M_PI * radius * radius; }
    double volume() override { return (4.0 / 3.0) * M_PI * radius * radius * radius; }
    void print() override { cout << "Sphere: radius = " << radius << endl; }
};

// Բ�����ࣨ�̳���Container��
class Cylinder : public Container {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double surfaceArea() override { return 2 * M_PI * radius * (radius + height); }
    double volume() override { return M_PI * radius * radius * height; }
    void print() override { cout << "Cylinder: radius = " << radius << ", height = " << height << endl; }
};

// ���㺯����ͨ�����õ����������
void TopPrint(Container& r) {
    r.print();
}

int main() {
    // 1. �������������ͻ���ָ��
    Cube cube(5.0);
    Sphere sphere(3.0);
    Cylinder cylinder(2.0, 10.0);

    Container* containers[] = { &cube, &sphere, &cylinder };

    // ͨ������ָ������麯������̬��̬�ԣ�
    for (Container* c : containers) {
        c->print();
        cout << "Surface Area: " << c->surfaceArea() << endl;
        cout << "Volume: " << c->volume() << "\n\n";
    }

    // 2. ���ö��㺯��TopPrint
    cout << "Using TopPrint function:\n";
    TopPrint(cube);
    TopPrint(sphere);
    TopPrint(cylinder);

    // 3. ����ʵ���������ࣨȡ��ע���Թ۲����
    // Container c;  // �����޷�ʵ����������

    return 0;
}