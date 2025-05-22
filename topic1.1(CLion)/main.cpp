// #include <iostream>
// #include <random>//生成随机数的头文件
//
// using namespace std;
//
// // 生成100个随机整数，范围是1-1000
// vector<int> generate_random_numbers() {
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dis(1, 1000);
//     vector<int> nums(100);
//
//     for (int i = 0; i < 100; ++i) {
//         nums[i] = dis(gen);
//     }
//     return nums;
// }
//
// // 插入排序
// void insertion_sort(vector<int>& arr) {
//     for (int i = 1; i < arr.size(); ++i) {
//         int key = arr[i];
//         int j = i - 1;
//
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }
//
// // 快速排序
// void quick_sort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pivot = arr[high];
//         int i = low - 1;
//
//         for (int j = low; j < high; ++j) {
//             if (arr[j] <= pivot) {
//                 swap(arr[++i], arr[j]);
//             }
//         }
//         swap(arr[i + 1], arr[high]);
//         int pi = i + 1;
//         quick_sort(arr, low, pi - 1);
//         quick_sort(arr, pi + 1, high);
//     }
// }
//
// // 希尔排序
// void shell_sort(vector<int>& arr) {
//     int n = arr.size();
//
//     for (int gap = n / 2; gap > 0; gap /= 2) {
//         for (int i = gap; i < n; ++i) {
//             int temp = arr[i];
//             int j;
//
//             for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
//                 arr[j] = arr[j - gap];
//             }
//             arr[j] = temp;
//         }
//     }
// }
//
// // 归并排序
// void merge(vector<int>& arr, int l, int m, int r) {
//     vector<int> L(arr.begin() + l, arr.begin() + m + 1);
//     vector<int> R(arr.begin() + m + 1, arr.begin() + r + 1);
//     int i = 0, j = 0, k = l;
//
//     while (i < L.size() && j < R.size()) {
//         if (L[i] <= R[j])
//             arr[k++] = L[i++];
//         else
//             arr[k++] = R[j++];
//     }
//
//     while (i < L.size())
//         arr[k++] = L[i++];
//
//     while (j < R.size())
//         arr[k++] = R[j++];
// }
//
// void merge_sort(vector<int>& arr, int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         merge_sort(arr, l, m);
//         merge_sort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }
//
// // 堆排序
// void heapify(vector<int>& arr, int n, int i) {
//     int largest = i;
//     int l = 2 * i + 1;
//     int r = 2 * i + 2;
//     if (l < n && arr[l] > arr[largest]) largest = l;
//     if (r < n && arr[r] > arr[largest]) largest = r;
//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
//
// void heap_sort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = n / 2 - 1; i >= 0; --i)
//         heapify(arr, n, i);
//     for (int i = n - 1; i > 0; --i) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }
//
// int main() {
//     vector<int> nums = generate_random_numbers();
//     cout << "原始数据: ";
//
//     //用范围for循环直接遍历数据
//
//     for (int num : nums) cout << num << " ";
//     cout << "\n\n";
//
//     vector<int> arr;
//
//     arr = nums;
//     insertion_sort(arr);
//     cout << "插入排序结果: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << "\n\n";
//
//     arr = nums;
//     quick_sort(arr, 0, arr.size() - 1);
//     cout << "快速排序结果: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << "\n\n";
//
//     arr = nums;
//     shell_sort(arr);
//     cout << "希尔排序结果: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << "\n\n";
//
//     arr = nums;
//     merge_sort(arr, 0, arr.size() - 1);
//     cout << "归并排序结果: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << "\n\n";
//
//     arr = nums;
//     heap_sort(arr);
//     cout << "堆排序结果: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << "\n\n";
//
//     return 0;
// }

#include <iostream>
#include <random>  // 包含随机数生成相关的头文件

using namespace std;

vector<int> generate_random_numbers() {
    random_device rd;       //真随机数种子生成器（基于硬件熵）
    mt19937 gen(rd());      //使用Mersenne Twister算法的高质量随机数引擎（网上抄的伪随机数）
    uniform_int_distribution<> dis(1, 1000);  // 定义均匀整数分布

    vector<int> nums(100);  //预分配100个元素的存储空间
    for (int i = 0; i < 100; ++i) {
        nums[i] = dis(gen);  //生成随机数并填充到容器
    }
    return nums;
}

void insertion_sort(vector<int>& arr) {
    //从第二个元素开始遍历（下标1到n-1）
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];  //当前待插入元素
        int j = i - 1;     //已排序区间的末位索引

        //将比key大的元素向右移动，寻找插入位置
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  //元素右移腾出空位
            j--;                  //向左比较前一个元素
        }
        arr[j + 1] = key;  //将key插入正确位置
    }
}

int main() {
    // 生成并展示原始数据
    vector<int> nums = generate_random_numbers();
    //声明一个 vector<int> 类型的变量 nums，并将其初始化为函数 generate_random_numbers() 的返回值

    cout << "原始数据: ";
    for (int i = 0; i < nums.size(); ++i) {  //传统 for 循环遍历容器元素
        cout << nums[i] << " ";  //输出时添加空格分隔
    }
    cout << "\n\n";

    // 插入排序演示
    vector<int> arr = nums;  //创建副本保留原始数据
    insertion_sort(arr);      //调用函数执行排序，直接修改arr
    //vector<int> 类型的副本 arr，用于保留原始数据 nums

    cout << "插入排序结果: ";
    for (int i = 0; i < arr.size(); ++i) {
        //传统 for 循环遍历已排序数组
        cout << arr[i] << " ";  //输出排序结果
    }
    cout << "\n\n";

    return 0;
}