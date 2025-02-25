//#include <iostream>
//
//int main() {
////    char ch;
////    std::cout << "请输入一个字符: ";
////    std::cin >> ch;
////
////    // 检查字符是否为小写字母
////    if (ch >= 'a' && ch <= 'z') {
////        std::cout << "这是一个小写字母" << std::endl;
////    }
////        // 检查字符是否为大写字母
////    else if (ch >= 'A' && ch <= 'Z') {
////        std::cout << "这是一个大写字母" << std::endl;
////    }
////        // 如果字符不是字母，则输出字符本身
////    else {
////        std::cout << ch << std::endl;
////    }
//
//    std::cout << "hello world" << std::endl;
//    std::cout << "你好" << std::endl;
//
//    return 0;
//}

//#include <iostream>
////
////int main(){
////    int year;
////    int month;
////    int day;
////    int days = 0;
////
////    std::cout << "请按顺序依次输入你想要的年月日，这个程序会计算你输入的日期是那一年的第几天" << std::endl;
////
////    std::cout << "请输入年份：" ;
////    std::cin >> year;
////
////    std::cout << "请输入月份：" ;
////    std::cin >> month;
////
////    std::cout << "请输入天数：" ;
////    std::cin >> day;
////
////    int month_year1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
////    int month_year2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
////
////    //判断是不是闰年
////    int flag = 1;
////    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
////        flag = 1;
////    }else{
////        flag = 0;
////    }
////
////    if (flag == 1){
////        for (int i = 0; i < month-1; i++){
////            days += month_year2[i];
////        }
////        days += day;
////    } else{
////        for (int i = 0; i < month-1; i++){
////            days += month_year1[i];
////        }
////        days += day;
////    }
////
////    std::cout << year << "年" << month << "月" << day << "天是这一年的第" << days << "天" << std::endl;
////
////    return 0;
////}

#include <iostream>

int main(){
    int count = 0;

    for (int i = 1; i <= 100; i++){
        std::cout << i << " ";
        count++;
        if (count == 5){
            std::cout << std::endl;
            count = 0;
        }
    }
}
























