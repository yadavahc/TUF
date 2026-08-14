#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr) {
        int n = (int)arr.size();
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            // Shift elements of arr[0..i-1], that are greater than key, to one position ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }
};

static void printVector(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    Solution sol;

    vector<int> a1 = {5, 2, 9, 1, 5, 6};
    sol.insertionSort(a1);
    printVector(a1); // 1 2 5 5 6 9

    vector<int> a2 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sol.insertionSort(a2);
    printVector(a2); // 1 2 3 4 5 6 7 8 9

    vector<int> a3 = {1, 2, 3, 4, 5};
    sol.insertionSort(a3);
    printVector(a3); // 1 2 3 4 5

    return 0;
}
