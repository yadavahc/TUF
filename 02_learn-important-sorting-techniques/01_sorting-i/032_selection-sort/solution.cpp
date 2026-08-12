#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = (int)a.size();
    for (int i = 0; i + 1 < n; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[minIdx]) minIdx = j;
        }
        if (minIdx != i) swap(a[i], a[minIdx]);
    }
}

void printVec(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    vector<vector<int>> tests = {
        {64, 25, 12, 22, 11},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };

    for (auto arr : tests) {
        cout << "Input:  ";
        printVec(arr);
        selectionSort(arr);
        cout << "Sorted: ";
        printVec(arr);
        cout << "----\n";
    }
    return 0;
}
