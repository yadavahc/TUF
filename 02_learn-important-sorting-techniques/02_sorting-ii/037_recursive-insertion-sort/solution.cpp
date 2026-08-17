#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursiveInsertionSort(vector<int>& a) {
        sortRec(a, (int)a.size());
    }
private:
    void sortRec(vector<int>& a, int n) {
        if (n <= 1) return;
        sortRec(a, n - 1);
        int key = a[n - 1];
        insertRec(a, n - 2, key);
    }
    void insertRec(vector<int>& a, int j, int key) {
        if (j < 0 || a[j] <= key) {
            a[j + 1] = key;
            return;
        }
        a[j + 1] = a[j];
        insertRec(a, j - 1, key);
    }
};

void printVec(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    Solution sol;

    vector<int> a1 = {5, 2, 9, 1, 5, 6};
    vector<int> a2 = {10, 9, 8, 7, 6, 5};
    vector<int> a3 = {-3, 0, -1, 8, 7, 2, 2};

    sol.recursiveInsertionSort(a1);
    sol.recursiveInsertionSort(a2);
    sol.recursiveInsertionSort(a3);

    cout << "Sorted a1: "; printVec(a1);
    cout << "Sorted a2: "; printVec(a2);
    cout << "Sorted a3: "; printVec(a3);

    return 0;
}
