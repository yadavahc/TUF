#include <bits/stdc++.h>
using namespace std;

void bubblePass(vector<int>& a, int j, int n, bool &swapped) {
    if (j >= n - 1) return;
    if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        swapped = true;
    }
    bubblePass(a, j + 1, n, swapped);
}

void recursiveBubbleSort(vector<int>& a, int n) {
    if (n <= 1) return;
    bool swapped = false;
    bubblePass(a, 0, n, swapped);
    if (!swapped) return; // already sorted
    recursiveBubbleSort(a, n - 1);
}

void sortArray(vector<int>& a) {
    recursiveBubbleSort(a, (int)a.size());
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
        {64, 34, 25, 12, 22, 11, 90},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };
    for (auto t : tests) {
        cout << "Original: ";
        printVec(t);
        sortArray(t);
        cout << "Sorted:   ";
        printVec(t);
        cout << "----\n";
    }
    return 0;
}
