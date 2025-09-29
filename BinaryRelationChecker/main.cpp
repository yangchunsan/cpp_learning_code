#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class BinaryRelation {
private:
    int n; // 集合元素个数
    vector<vector<int>> matrix; // 关系矩阵

public:
    // 构造函数
    BinaryRelation(int size) {
        n = size;
        matrix.resize(n, vector<int>(n, 0));
    }

    // 随机生成关系矩阵
    void generateRandomMatrix() {
        srand(time(0)); // 设置随机种子

        // 随机生成关系矩阵（0或1）
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = rand() % 2; // 生成0或1
            }
        }
    }

    // 输出关系矩阵
    void printMatrix() {
        cout << "关系矩阵：" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(2) << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // 判断自反性
    bool isReflexive() {
        for (int i = 0; i < n; i++) {
            if (matrix[i][i] != 1) {
                cout << "不满足自反性，因为第" << i+1 << "行第" << i+1 << "列应该为1" << endl;
                return false;
            }
        }
        cout << "满足自反性" << endl;
        return true;
    }

    // 判断反自反性
    bool isAntiReflexive() {
        for (int i = 0; i < n; i++) {
            if (matrix[i][i] != 0) {
                cout << "不满足反自反性，因为第" << i+1 << "行第" << i+1 << "列应该为0" << endl;
                return false;
            }
        }
        cout << "满足反自反性" << endl;
        return true;
    }

    // 判断对称性
    bool isSymmetric() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    cout << "不满足对称性，因为第" << i+1 << "行第" << j+1 << "列与第"
                         << j+1 << "行第" << i+1 << "列不同时为1" << endl;
                    return false;
                }
            }
        }
        cout << "满足对称性" << endl;
        return true;
    }

    // 判断反对称性
    bool isAntiSymmetric() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && matrix[i][j] == 1 && matrix[j][i] == 1) {
                    cout << "不满足反对称性，因为第" << i+1 << "行第" << j+1 << "列与第"
                         << j+1 << "行第" << i+1 << "列同时为1" << endl;
                    return false;
                }
            }
        }
        cout << "满足反对称性" << endl;
        return true;
    }

    // 判断传递性
    bool isTransitive() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1) {
                    for (int k = 0; k < n; k++) {
                        if (matrix[j][k] == 1 && matrix[i][k] != 1) {
                            cout << "不满足传递性，因为第" << i+1 << "行第" << j+1
                                 << "列为1，第" << j+1 << "行第" << k+1 << "列也为1，而第"
                                 << i+1 << "行第" << k+1 << "列不为1" << endl;
                            return false;
                        }
                    }
                }
            }
        }
        cout << "满足传递性" << endl;
        return true;
    }

    // 判断所有性质
    void checkAllProperties() {
        cout << "性质描述：" << endl;
        isReflexive();
        isAntiReflexive();
        isSymmetric();
        isAntiSymmetric();
        isTransitive();
    }
};

int main() {
    int n;

    cout << "请输入集合X的元素个数（不超过5个元素）: ";
    cin >> n;

    // 验证输入合法性
    if (n <= 0 || n > 5) {
        cout << "错误：元素个数应在1-5之间！" << endl;
        return 1;
    }

    // 创建二元关系对象并生成随机矩阵
    BinaryRelation relation(n);
    relation.generateRandomMatrix();

    // 输出关系矩阵
    relation.printMatrix();

    // 检查所有性质
    relation.checkAllProperties();

    cout << endl << "请按任意键继续...";
    cin.ignore();
    cin.get();

    return 0;
}