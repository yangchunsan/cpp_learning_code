#include <iostream>

//用于重复读取用户在控制台输入的数字
int getNumberInput(){
    int input = -1;
    std::cin >> input;

    while (std::cin.fail()){
        std::cin.clear();
        std::cin >> input;
    }

    return input;
}

//菜单功能
void playgame(){
    int userChoice = -1;//用于记录用户的选择
    bool flag = 1;//用于记录游戏是否继续

    //利用死循环重复游戏
    while (flag) {
        std::cout << "请输入您的选择：1.自选号码；2.机选号码；0.退出程序" << std::endl;
       userChoice = getNumberInput();

        switch (userChoice) {
            case 0:
                flag = 0;
                break;
            case 1:
                break;
            case 2:
                break;
            default:
                std::cout << "您的输入有误，请重新输入" << std::endl;
                continue;
        }
    }
}

int main() {
    playgame();

    return 0;
}
