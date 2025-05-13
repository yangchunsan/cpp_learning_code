#include <iostream>
#include <random>//生成随机数的头文件

using namespace std;

// 生成100个随机整数（范围1-1000）
vector<int> generate_random_numbers() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 1000);
    vector<int> nums(100);

    for (int i = 0; i < 100; ++i) {
        nums[i] = dis(gen);
    }
    return nums;
}

// 插入排序
void insertion_sort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 快速排序
void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; ++j) {
            if (arr[j] <= pivot) {
                swap(arr[++i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// 希尔排序
void shell_sort(vector<int>& arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// 归并排序
void merge(vector<int>& arr, int l, int m, int r) {
    vector<int> L(arr.begin() + l, arr.begin() + m + 1);
    vector<int> R(arr.begin() + m + 1, arr.begin() + r + 1);
    int i = 0, j = 0, k = l;

    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) 
            arr[k++] = L[i++];
        else 
            arr[k++] = R[j++];
    }

    while (i < L.size()) 
        arr[k++] = L[i++];

    while (j < R.size()) 
        arr[k++] = R[j++];
}

void merge_sort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// 堆排序
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> nums = generate_random_numbers();
    cout << "原始数据: ";

    //用范围for循环直接遍历数据

    for (int num : nums) cout << num << " ";
    cout << "\n\n";

    vector<int> arr;

    arr = nums;
    insertion_sort(arr);
    cout << "插入排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    arr = nums;
    quick_sort(arr, 0, arr.size() - 1);
    cout << "快速排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    arr = nums;
    shell_sort(arr);
    cout << "希尔排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    arr = nums;
    merge_sort(arr, 0, arr.size() - 1);
    cout << "归并排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    arr = nums;
    heap_sort(arr);
    cout << "堆排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    return 0;
}