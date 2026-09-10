#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = (int)nums.size();
        int i = n - 2;
        // 1) Find rightmost dip
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;
        if (i >= 0) {
            // 2) Find just larger element to the right
            int j = n - 1;
            while (j > i && nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }
        // 3) Reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};

void printVec(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    Solution sol;

    vector<int> a1 = {1, 2, 3};
    sol.nextPermutation(a1);
    printVec(a1); // Expected: 1 3 2

    vector<int> a2 = {3, 2, 1};
    sol.nextPermutation(a2);
    printVec(a2); // Expected: 1 2 3

    vector<int> a3 = {1, 1, 5};
    sol.nextPermutation(a3);
    printVec(a3); // Expected: 1 5 1

    return 0;
}
