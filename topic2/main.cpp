// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <string>
//
// using namespace std;
//
// int main() {
//     int numBalls, numSlots;
//     cout << "输入要掉落的球的个数:";
//     cin >> numBalls;
//     cout << "输入机器的槽数:";
//     cin >> numSlots;
//     int layers = numSlots - 1; // 钉子层数
//
//     srand(time(0)); // 初始化随机种子
//
//     vector<int> slots(numSlots, 0);
//     cout << "小球下落路径:" << endl;
//     for (int i = 0; i < numBalls; ++i) {
//         string path;
//         int rightCount = 0;
//         for (int j = 0; j < layers; ++j) {
//             if (rand() % 2 == 0) {
//                 path += 'L';
//             } else {
//                 path += 'R';
//                 rightCount++;
//             }
//         }
//         cout << path << endl;
//         slots[rightCount]++;
//     }
//
//     cout << "\n各槽的最终储备量:" << endl;
//     for (int i = 0; i < numSlots; ++i) {
//         cout << "第" << (i + 1) << "个槽: " << slots[i] << "个小球" << endl;
//     }
//
//     return 0;
// }

#include <iostream>   // 输入输出流库
#include <vector>     // 动态数组容器库
#include <ctime>      // 时间库，用于生成随机种子
#include <string>     // 字符串处理库

using namespace std;

int main() {
    //输入部分
    int numBalls, numSlots;
    cout << "输入要掉落的球的个数:";
    cin >> numBalls;//获取小球数量
    cout << "输入机器的槽数:";
    cin >> numSlots;//获取槽的数量
    int layers = numSlots - 1;//计算钉子层数（槽数减一，例如5槽需要4层钉子决定路径）

    srand(time(0));//用当前时间初始化随机种子，确保每次运行结果不同

    vector<int> slots(numSlots, 0);//初始化所有槽的计数器为0
    cout << "小球下落路径:" << endl;

    // 模拟每个小球下落过程
    for (int i = 0; i < numBalls; ++i) {
        string path;//记录当前小球的路径字符串
        int rightCount = 0; //记录小球向右移动的次数（决定最终落入哪个槽）

        //遍历每一层钉子 生成随机路径
        for (int j = 0; j < layers; ++j) {
            //随机生成0或1，0代表左(L)，1代表右(R)
            if (rand() % 2 == 0) {
                path += 'L';//向左走，路径添加'L'
            } else {
                path += 'R';//向右走，路径添加'R'
                rightCount++;//右转次数+1
            }
        }
        cout << path << endl;//输出当前小球的路径
        slots[rightCount]++;//根据右转次数确定槽位，对应槽计数器+1
    }

    //输出最终结果
    cout << "\n各槽的最终储备量:" << endl;
    for (int i = 0; i < numSlots; ++i) {
        //槽编号从1开始显示（i+1），但存储时索引从0开始
        cout << "第" << (i + 1) << "个槽: " << slots[i] << "个小球" << endl;
    }

    return 0;
}