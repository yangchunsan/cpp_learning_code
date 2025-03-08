//#include <iostream>
//
//using namespace std;
//
//class MyNumber{
//private:
//    int n;
//
//public:
//    MyNumber(): n(0){}//默认构造函数
//    MyNumber(int n): n(0){}//构造函数
//
//    void display(){//成员函数，打印n的值
//        cout << n << endl;
//    }
//
//    //设计一个函数，累加上一个数字，返回对象本身
//    MyNumber& add(int n){
//        this->n += n;
//        return *this;
//    }
//
//    MyNumber& minus(int n){
//        this->n -= n;
//        return *this;
//    }
//};
//
//int main(){
//
//    MyNumber n(0);
//    //每一次的函数调用，得到了自己（n）
//    n.add(10).add(1).minus(5).add(1).display();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//// 使用引用传递参数，避免拷贝，因为共享同一块内存空间
//void print(const string& str) {
//    cout << "String: " << str << endl;
//}
//
////对形式参数 const string& str 的解释
////表示函数只能接受一个 string 类型的引用作为形式参数
////const 表示这个引用是只读的，不能在函数体里面修改
////在函数体传参的时候，引用就初始化了
//
//int main() {
//    string myString = "Hello, World!";
//    print(myString);  // 传递引用，避免拷贝
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyNumber{
//public:
//    int n;
//
//    //默认构造函数
//    MyNumber(): n(0){}
//    //有参构造函数
//    MyNumber(int n): n(n){}
//
//    //成员函数：打印n的值
//    void print(){
//        cout << n << endl;
//    }
//
//    //成员函数：累加上一个数字，并返回对象本本身
//    MyNumber& Add(int n){
//        this->n += n;//n是形参
//        return *this;//返回对象本身
//    }
//};
//
//int main(){
//    MyNumber n;
//
//    n.Add(3).Add(5).Add(3).print();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class ConstantHolder {
//private:
//    const int myValue; // 常量数据成员
//
//public:
//    // 构造函数
//    ConstantHolder(int value) : myValue(value) {//低版本初始化只能在初始化列表中初始化
//        cout << "对象ConstantHolder中用myValue创建的常量数据成员的值: " << myValue << endl;
//    }
//
//    // 成员函数：打印myValue的值
//    void display() const {
//        cout << "myValue的值: " << myValue << endl;
//    }
//};
//
//int main() {
//    ConstantHolder holder(10); // 创建对象，初始化 myValue 为 10
//    holder.display();          // 输出 myValue 的值
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Test{
//public:
//    const int a;
//    //c++11以上可以直接类内初始化
//    //const int a = 10;
//
//    //构建函数初始化常量数据成员
//    Test(int a): a(a){
//        cout << "初始化成功" << endl;
//    }
//
//    //成员函数：打印a的值
//    void print(){
//        cout << a << endl;
//    }
//};
//
//int main(){
//    //创建一个新对象
//    Test a = Test(10);//或者Test a(10)
//    a.print();//打印一下
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//private:
//    int value;
//
//public:
//    MyClass(int v) : value(v) {}
//
//    // 非 const 成员函数
//    void setValue(int v) {
//        value = v;
//    }
//
//    // const 成员函数
//    int getValue() const {
//        return value;
//    }
//};
//
//int main() {
//    const MyClass obj(10); // 创建一个常量对象obj
//
//    cout << "Original value: " << obj.getValue() << endl; // 输出: 10
//
//    // 以下代码会导致编译错误，因为无法调用非 const 成员函数
//    // obj.setValue(20); // 错误: 无法修改常量对象
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class IntegerStorage {
//private:
//    int value;  // 非静态数据成员
//
//public:
//    // 构造函数
//    IntegerStorage(int v) : value(v) {}
//
//    // 常量成员函数，用于获取 value 的值
//    int getValue() const {
//        return value;
//    }
//};
//
//int main() {
//    IntegerStorage storage(10);
//    cout << "Value: " << storage.getValue() << endl;  // 调用常量成员函数
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//public:
//    static int count;  // 静态数据成员
//
//    // 静态成员函数的声明
//    static void incrementCount() {
//        count++;  // 修改静态数据成员
//        cout << "Count incremented to " << count << endl;
//    }
//
//    // 非静态成员函数：打印count的值
//    void displayCount() {
//        cout << "Count is " << count << endl;
//    }
//};
//
//// 在类外初始化静态数据成员
//int MyClass::count = 0;
//
//int main() {
//    // 直接通过类名调用静态成员函数
//    MyClass::incrementCount();  // 输出：Count incremented to 1
//    MyClass::incrementCount();  // 输出：Count incremented to 2
//
//    // 创建对象并调用非静态成员函数
//    MyClass obj;
//    obj.displayCount();  // 输出：Count is 2
//
//    // 也可以通过对象调用静态成员函数（不推荐）
//    obj.incrementCount();  // 输出：Count incremented to 3
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass{
//public:
//    static int a;//创建一个静态数据成员，记得要在类外初始化
//
//    //再创建一个静态成员函数，修改a的值
//    //格式是？类内类外不一样
//    static void changea(){
//        a++;
//        cout << "静态数据成员被访问" << endl;
//    }
//
//    //在创建一个非静态成员函数，打印静态数据成员的值
//    void print(){
//        cout << "a的值是：" << a << endl;
//    }
//
////    static void changea();
//};
//
////类外定义静态成员函数的话，不需要static
////void MyClass::changea() {
////    a++;
////    cout << "静态数据成员被访问" << endl;
////}
//
////非常重要重要重要，类外要初始化静态数据成员
////格式？跟静态成员函数一样不用加 static
//int MyClass::a = 0;
//
//int main(){
//
//    //先访问两次静态成员函数吧
//    MyClass::changea();
//    MyClass::changea();
//
//    //打印一下，非静态成员函数是需要依附于对象的
//    MyClass obj;
//    obj.print();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//public:
//    // 静态常量成员（整型）  可以在类内初始化
//    static const int MAX_SIZE = 100;
//
//    // 静态常量成员（浮点型） 必须在类外初始化
//    static const double PI;
//
//    // 成员函数：打印两个静态常量成员的值
//    void display() {
//        cout << "MAX_SIZE: " << MAX_SIZE << endl;
//        cout << "PI: " << PI << endl;
//    }
//};
//
//// 类外定义和初始化浮点型静态常量成员 不需要用到static关键字
//const double MyClass::PI = 3.14159;
//
//int main() {
//    // 通过类名访问静态常量成员
//    cout << "MyClass::MAX_SIZE: " << MyClass::MAX_SIZE << endl;
//    cout << "MyClass::PI: " << MyClass::PI << endl;
//
//    // 通过对象访问静态常量成员
//    MyClass obj;
//    obj.display();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass{
//public:
//    //声明两个静态常量成员
//    static const int a;
//    static const double PI;
//
//    //定义一个成员函数，打印两个静态常量成员
//    void print(){
//        cout << a << endl;
//        cout << PI << endl;
//    }
//};
//
////类外定义两个静态常量成员
//const int MyClass::a = 10;
//const double MyClass::PI = 3.14;
//
//int main(){
//    //静态常量成员是属于类，所以可以直接访问
//    cout << "一个整数a：" << MyClass::a << endl;
//    cout << "圆周率估算PI：" << MyClass::PI << endl;
//
//    // 通过对象访问静态常量成员
//    MyClass obj;
//    obj.print();
//
//    return 0;
//}










