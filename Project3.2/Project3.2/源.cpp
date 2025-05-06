#define _USE_MATH_DEFINES   
#include <cmath>            
#include <iostream>

using namespace std;

// 抽象基类：容器类
class Container {
public:
    virtual double surfaceArea() = 0;   // 纯虚函数：求表面积
    virtual double volume() = 0;       // 纯虚函数：求体积
    virtual void print() = 0;          // 纯虚函数：输出信息
};

// 正方体类（继承自Container）
class Cube : public Container {
private:
    double side;
public:
    Cube(double s) : side(s) {}
    double surfaceArea() override { return 6 * side * side; }
    double volume() override { return side * side * side; }
    void print() override { cout << "Cube: side = " << side << endl; }
};

// 球体类（继承自Container）
class Sphere : public Container {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double surfaceArea() override { return 4 * M_PI * radius * radius; }
    double volume() override { return (4.0 / 3.0) * M_PI * radius * radius * radius; }
    void print() override { cout << "Sphere: radius = " << radius << endl; }
};

// 圆柱体类（继承自Container）
class Cylinder : public Container {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double surfaceArea() override { return 2 * M_PI * radius * (radius + height); }
    double volume() override { return M_PI * radius * radius * height; }
    void print() override { cout << "Cylinder: radius = " << radius << ", height = " << height << endl; }
};

// 顶层函数：通过引用调用输出函数
void TopPrint(Container& r) {
    r.print();
}

int main() {
    // 1. 定义派生类对象和基类指针
    Cube cube(5.0);
    Sphere sphere(3.0);
    Cylinder cylinder(2.0, 10.0);

    Container* containers[] = { &cube, &sphere, &cylinder };

    // 通过基类指针调用虚函数（动态多态性）
    for (Container* c : containers) {
        c->print();
        cout << "Surface Area: " << c->surfaceArea() << endl;
        cout << "Volume: " << c->volume() << "\n\n";
    }

    // 2. 调用顶层函数TopPrint
    cout << "Using TopPrint function:\n";
    TopPrint(cube);
    TopPrint(sphere);
    TopPrint(cylinder);

    // 3. 尝试实例化抽象类（取消注释以观察错误）
    // Container c;  // 错误：无法实例化抽象类

    return 0;
}