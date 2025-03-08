//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//    friend void friendFunction();  // 声明友元函数
//private:
//    int value;
//};
//
////定义友元函数
//void friendFunction() {
//    MyClass obj;
//    obj.value = 10;  // 可以访问 MyClass 的私有成员
//    cout << "Value: " << obj.value << endl;
//}
//
//int main() {
//    friendFunction();  // 输出：Value: 10
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class MyClass {
//    friend void friendFunction();  // 声明友元函数
//private:
//    int value = 10;  // 私有成员
//};
//
//class AnotherClass {
//    friend void friendFunction();  // 声明友元函数
//protected:
//    int anotherValue = 20;  // 保护成员
//};
//
//void friendFunction() {
//    MyClass obj1;
//    AnotherClass obj2;
//    cout << "MyClass::value: " << obj1.value << endl;  // 输出：10
//    cout << "AnotherClass::anotherValue: " << obj2.anotherValue << endl;  // 输出：20
//}
//
//int main() {
//    friendFunction();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class MyClass{
//    //声明友元函数
//    friend void friendFunction();
//
//private:
//    int Value = 10;
//};
//
//class anotherMyClass{
//    //声明友元函数
//    friend void friendFunction();
//
//protected:
//    int anotherValue = 10;
//};
//
////定义友元函数
//void friendFunction(){
//    MyClass Value = MyClass();
//    anotherMyClass anotherValue;
//
//    //如何利用友元函数访问？直接在类外访问就是它的用法
//    cout << Value.Value << endl;
//    cout << anotherValue.anotherValue << endl;
//}
//
//int main(){
//    friendFunction();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class AnotherClass{
//public:
//    void accessMyClass();
//};  // 前置声明
//
//class MyClass {
//    friend void AnotherClass::accessMyClass();  // 声明友元成员函数
//private:
//    int value = 10;  // 私有成员
//};
//
//void AnotherClass::accessMyClass() {
//    MyClass obj;
//    cout << "MyClass::value: " << obj.value << endl;  // 输出：10
//}
//
//int main() {
//    AnotherClass another;
//    another.accessMyClass();  // 输出：MyClass::value: 10
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class AnotherClass {
//public:
//    void accessMyClass();  // 声明 AnotherClass 的成员函数 accessMyClass，然后在类外定义
//};  // 完整定义类 AnotherClass
//
//class MyClass {
//    friend void AnotherClass::accessMyClass();  // 声明友元成员函数
//    // 声明 AnotherClass::accessMyClass 为友元函数，允许它访问 MyClass 的私有成员
//
//private:
//    int value = 10;  // MyClass 的私有成员变量
//    // 只有 MyClass 的成员函数和友元函数可以访问
//};
//
////在类外定义友元成员函数
//void AnotherClass::accessMyClass() {
//    MyClass obj;  // 创建 MyClass 的对象
//    cout << "MyClass::value: " << obj.value << endl;  // 输出 MyClass 的私有成员 value
//    // 因为 accessMyClass 是 MyClass 的友元函数，所以可以访问 MyClass 的私有成员
//}
//
//int main() {
//    AnotherClass another;  // 创建 AnotherClass 的对象
//    another.accessMyClass();  // 调用 AnotherClass 的成员函数 accessMyClass
//    // 输出：MyClass::value: 10
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class AnotherClass{
//public:
//    //先声明一下这个成员函数，友元是在别的类里面体现的
//    void accessMyClass();
//};
//
//class MyClass{
//    //在类内声明一下友元成员函数，并说明这个是属于哪个类的
//    friend void AnotherClass::accessMyClass();
//
//private:
//    int value = 10;
//};
//
////在类外定义友元成员函数
//
//void AnotherClass::accessMyClass(){
//    MyClass obj;
//    cout << "value : " << obj.value << endl;
//}
//
//int main(){
//    AnotherClass Another;
//    Another.accessMyClass();
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class AnotherClass;  // 前置声明
//
//class MyClass {
//    friend class AnotherClass;  // 声明友元类
//private:
//    int value = 10;  // 私有成员
//};
//
//class AnotherClass {
//public:
//    void accessMyClass() {
//        MyClass obj;
//        cout << "MyClass::value: " << obj.value << endl;  // 可以访问 MyClass 的私有成员
//    }
//};
//
//int main() {
//    AnotherClass another;
//    another.accessMyClass();  // 输出：MyClass::value: 10
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class AnotherClass;
//
//class MyClass{
//    friend AnotherClass;
//
//private:
//    int value = 10;
//};
//
//class AnotherClass{
//public:
//    void accessClass(){
//        MyClass obj;
//        cout << obj.value << endl;
//    }
//};
//int main(){
//    AnotherClass another;
//    another.accessClass();
//
//    return 0;
//}




















































