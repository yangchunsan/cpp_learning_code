#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

void heapify(vector<string>& arr, int n, int i) {
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

void heapSort(vector<string>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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

    heapSort(strings);

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