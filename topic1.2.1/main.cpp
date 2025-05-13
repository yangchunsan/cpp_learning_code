#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

void insertionSort(vector<string>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(strings);

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