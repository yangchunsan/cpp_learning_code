#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

int main() {
    int numBalls, numSlots;
    cout << "输入要掉落的球的个数:";
    cin >> numBalls;
    cout << "输入机器的槽数:";
    cin >> numSlots;
    int layers = numSlots - 1; // 钉子层数

    srand(time(0)); // 初始化随机种子

    vector<int> slots(numSlots, 0);
    cout << "小球下落路径:" << endl;
    for (int i = 0; i < numBalls; ++i) {
        string path;
        int rightCount = 0;
        for (int j = 0; j < layers; ++j) {
            if (rand() % 2 == 0) {
                path += 'L';
            } else {
                path += 'R';
                rightCount++;
            }
        }
        cout << path << endl;
        slots[rightCount]++;
    }

    cout << "\n各槽的最终储备量:" << endl;
    for (int i = 0; i < numSlots; ++i) {
        cout << "第" << (i + 1) << "个槽: " << slots[i] << "个小球" << endl;
    }

    return 0;
}