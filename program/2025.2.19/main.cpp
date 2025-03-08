//#include <iostream>
//
//using namespace std;
//
//inline int square(int x){
//    return x * x;
//}
//
//inline int cube(int x){
//    return x * x * x;
//}
//
//int main() {
//    cout << "x" << '\t' << "x*x" << '\t' << "x*x*x" << endl;
//    for(int i = 1; i <= 50; i++){
//        cout << i << '\t' << square(i) << '\t' << cube(i) << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//class Person{
//public:
//    string name;
//    string gender;
//    int age;
//    int score;
//
//    void eat(){
//        cout << "人类都会吃饭" << endl;
//    }
//
//    void sleep(){
//        cout << "人类都会睡觉" << endl;
//    }
//};
//
//int main(){
//    Person xiaoming = Person();//等号右边相当于初始化，Person是这个对象的数据类型
//    Person *xiaoli = new Person();//动态开辟一块空间，这块空间的数据类型是Person
//
//    cout << sizeof(xiaoming) << endl;
//    cout << sizeof(xiaoli) << endl;
//
//    xiaoming.name = "xiaoming";
//    xiaoming.age = 19;
//    xiaoming.gender = "male";
//    xiaoming.score = 100;
//    xiaoming.eat();
//    xiaoming.sleep();
//
//    cout << xiaoming.name << endl;
//    cout << xiaoming.age << endl;
//    cout << xiaoming.gender << endl;
//    cout << xiaoming.score << endl;
//
//    xiaoli->name = "xiaoli";
//    xiaoli->age = 18;
//    xiaoli->gender = "female";
//    xiaoli->score = 100;
//
//    cout << xiaoli->name << endl;
//    cout << xiaoli->age << endl;
//    cout << xiaoli->gender << endl;
//    cout << xiaoli->score << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Dog{
//public:
//    string name;
//    int age;
//};
//
//class Person{
//public:
//    string name;
//    int age;
//    Dog pet;   //Dog作为Person的一个属性
//    //属性指针类型是没有初始化的，使用的时候需要动态开辟
//    Dog *otherpet;
//};
//
//int main(){
//    Person xiaoming;
//    xiaoming.name = "xiaoming";
//    xiaoming.age = 18;
//    xiaoming.pet.name = "xiaobai";
//    xiaoming.pet.age = 1;
//
//    cout << xiaoming.name << endl;
//    cout << xiaoming.pet.name << endl;
//
//    xiaoming.otherpet = new Dog();
//    xiaoming.otherpet->name = "xiaobai";
//    xiaoming.otherpet->age = 1;
//
//    cout << xiaoming.otherpet->name << endl;
//    cout << xiaoming.otherpet->age << endl;
//
//    return 0;
//}

#include <iostream>

int main(){

}



























