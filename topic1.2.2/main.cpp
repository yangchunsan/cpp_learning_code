#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int partition(vector<string>& arr, int low, int high) {
    string pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}

void quickSort(vector<string>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(strings, 0, strings.size()-1);

    ofstream outFile("D:\\Code\\Cpp_Code\\zifuchuan.txt");
    for (const auto& s : strings) {
        outFile << s << endl;
    }
    outFile.close();

    return 0;
}
// edg
// blg
// xlg
// wol
// te
