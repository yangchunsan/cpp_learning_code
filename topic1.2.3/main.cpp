#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

void shellSort(vector<string>& arr) {
    int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            string temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
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

    shellSort(strings);

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
