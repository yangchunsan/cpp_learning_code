//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    int age;
//    string name;
//
//    Person() {}
//
//    Person(int age){
//        cout << "无参构造函数被调用了" << endl;
//    }
//
//    Person(int age, string name) : age(age), name(name) {
//        cout << "构造函数被调用了" << endl;
//    }
//
//    // 显式定义拷贝构造函数， 这个是可以不用定义的，编译器会默认生成拷贝构造函数
//    Person(const Person& other) : age(other.age), name(other.name) {
//        cout << "拷贝构造函数被调用了" << endl;
//    }
//
//    ~Person(){
//        cout << "析构函数被调用了" << endl;
//    }
//};
//
//int main() {
//    Person xiaoming(18, "xiaoming"); // 创建一个对象
//
//    // 创建一个新对象，并用老对象初始化
//    Person xiaobai = Person(xiaoming);//显式调用
//    //调用拷贝构造函数的方法也有三种，显式调用，括号法和隐式调用
////    Person xiaobai(xiaoming);//括号法
////    Person xiaobai = {xiaoming};//隐式调用
////    Person xiaobai = xiaoming;//直接赋值了
//
//    Person(20);
//    //	Person(20) 名称叫做匿名对象
//    //匿名对象的特点是，当这一行代码执行完毕之后，系统就会立即将其回收
//    //而且不能利用拷贝构造函数初始化 匿名对象
//    //比如Person(xiaoming) ，系统会认为Person(xiaoming) = person xiaoming;一个				对象的声明
//    return 0;
//}

