#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // position to place next non-zero
        for (int j = 0; j < (int)nums.size(); ++j) {
            if (nums[j] != 0) {
                if (i != j) swap(nums[i], nums[j]);
                ++i;
            }
        }
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

    vector<int> a = {0, 1, 0, 3, 12};
    sol.moveZeroes(a);
    printVec(a); // expected: 1 3 12 0 0

    vector<int> b = {0, 0, 0, 5, 6, 0, 7};
    sol.moveZeroes(b);
    printVec(b); // expected: 5 6 7 0 0 0 0

    vector<int> c = {4, -1, 2, 0, 0, 8};
    sol.moveZeroes(c);
    printVec(c); // expected: 4 -1 2 8 0 0

    return 0;
}
