//#include <iostream>
//
//using namespace std;
//
//int& test02(){
//    static int a = 10;
//
//    return a;
//}
//
//int main() {
//    int& ref = test02();
//
//    cout << "a = " << ref << endl;
//    cout << "a = " << ref << endl;
//
//    test02() = 1000;
//    cout << "a = " << ref << endl;
//    cout << "a = " << ref << endl;
//
//    test02() = 10000;
//    cout << "a = " << ref << endl;
//    cout << "a = " << ref << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void showValue(const int& value){
//    //形参是没有办法修改的，所以会报错
////    value++;
//    cout << value << endl;
//}
//
//int main(){
////    int& ref = 10;
////    引用本身需要一个合法的内存空间，因此这行报错
//
////    如果加入 const ，编译器会优化代码 int tmp = 10 const int& ref = temp
//
//    const int& ref = 10;
//    cout << ref << endl;
//
//    showValue(ref);
//
//    return 0;
//}

#include <iostream>

using namespace std;

void func(int& a){//int& a = 10; 是非法的
    cout << "func(int& a) 调用" << endl;
}

void func(const int& a){//const int& a = 10;是合法的
    cout << "func(const int& a) 调用" << endl;
}

int main(){
    int a = 10;
    func(a);

    func(10);

    return 0;
}