#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        helper(arr, 0, (int)arr.size() - 1);
    }
private:
    void helper(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        swap(arr[l], arr[r]);
        helper(arr, l + 1, r - 1);
    }
};

static void printVec(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    Solution sol;

    // Sample 1
    vector<int> a1 = {1, 2, 3, 4, 5};
    sol.reverseArray(a1);
    printVec(a1); // 5 4 3 2 1

    // Sample 2 (empty array)
    vector<int> a2 = {};
    sol.reverseArray(a2);
    printVec(a2); // (prints nothing)

    // Sample 3 (single element and negatives/duplicates mixed)
    vector<int> a3 = {42};
    sol.reverseArray(a3);
    printVec(a3); // 42

    vector<int> a4 = {0, -1, -1, 7, 7, 3};
    sol.reverseArray(a4);
    printVec(a4); // 3 7 7 -1 -1 0

    return 0;
}
