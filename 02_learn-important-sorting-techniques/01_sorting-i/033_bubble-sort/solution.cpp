#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a) {
    int n = (int)a.size();
    if (n <= 1) return;
    int end = n - 1;
    while (end > 0) {
        bool swapped = false;
        int lastSwap = 0;
        for (int i = 0; i < end; ++i) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
                lastSwap = i;
            }
        }
        if (!swapped) break;      // Already sorted
        end = lastSwap;           // Shrink boundary to last swap position
    }
}

void printVec(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << " ";
        cout << v[i];
    }
    cout << "]";
}

int main() {
    vector<vector<int>> tests = {
        {5, 1, 4, 2, 8, 0, 2},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };

    for (auto test : tests) {
        cout << "Input: ";
        printVec(test);
        bubbleSort(test);
        cout << " -> Sorted: ";
        printVec(test);
        cout << "\n";
    }
    return 0;
}
