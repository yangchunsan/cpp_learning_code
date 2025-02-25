//#include <iostream>
//
//int main() {
//    // 大小为 10 的数组已经装了 4 个元素
//    int arr[10];
//    for (int i = 0; i < 10; i++) {
//        arr[i] = i;
//    }
//
//    int newArray[20];
//    for (int i = 0;i < 10; i++){
//        newArray[i] = arr[i];
//    }
//    newArray[10] = 10;
//
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//int main(){
//    //创建一个动态数组
//    //不用显式指定数组的大小，它会根据实际储存的元素数量自动扩缩容
//}

//#include <iostream>
//
//using namespace std;
//
//class Student{
//public:
//    string name;
//    int age;
//    string gender;
//    int score;
//
//    //功能：自我介绍
//    void introductSelf(){
//        cout << "大家好，我叫" << name << "，我今年" << age << "岁了，" << "入学考的成绩是" << score << "分，感谢大家照顾！" << endl;
//    }
//};
//
//class Teacher {
//public:
//    string name;
//
//    //功能：让学生做自我介绍
//    void makeIntroduct(Student s){
//        s.introductSelf();
//    }
//};
//
//int main(){
//    //创建一个学生对象
//    Student xiaoming;
//    xiaoming.name = "xiaoming";
//    xiaoming.age = 18;
//    xiaoming.score = 100;
//    xiaoming.gender = "male";
//
//    //创建一个老师对象
//    Teacher laowang;
//    laowang.name = "laowang";
//
//    //核心业务：让学生自我介绍
//    laowang.makeIntroduct(xiaoming);
//
//    return  0;
//}

#include <iostream>
#include <math.h>
using namespace std;

//类：圆，点

//点：类
class Point{
public:
    double x;
    double y;
};

//点：圆
class Circle{
public:
    double radius;//圆的半径
    Point center;//圆心

    //功能：判断这个点是否在圆的内部
    bool contain(Point point){
        double dis = (center.x - point.x) * (center.x - point.x) + (center.y - point.y) * (center.y - point.y);
        return radius * radius > dis;
    }
};

int main(){
    //设计一个点
    Point point;
    point.x = 10;
    point.y = 15.5;

    //设计一个圆
    Circle circle;
    circle.radius = 7;
    circle.center.x = 10;
    circle.center.y = 8;

    cout << circle.contain(point) << endl;

    return 0;
}

























