#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

void merge(vector<string>& arr, int left, int mid, int right) {
    vector<string> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

void mergeSort(vector<string>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<string> strings;
    ifstream inFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");

    string line;
    while (getline(inFile, line)) {
        strings.push_back(line);
    }
    inFile.close();

    mergeSort(strings, 0, strings.size()-1);

    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
    for (const auto& s : strings) {
        outFile << s << endl;
    }
    outFile.close();

    system("pause");
    return 0;
}

// edg
// blg
// xlg
// wol
// te