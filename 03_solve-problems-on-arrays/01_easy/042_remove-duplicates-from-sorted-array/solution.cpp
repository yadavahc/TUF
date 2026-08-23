#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = (int)nums.size();
    if (n == 0) return 0;
    int j = 1; // position to write next unique element
    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[j - 1]) {
            nums[j++] = nums[i];
        }
    }
    return j;
}

int main() {
    vector<vector<int>> tests = {
        {1, 1, 2},
        {0, 0, 1, 1, 1, 2, 2, 3, 3, 4},
        {2, 2, 2, 2},
    };
    for (auto nums : tests) {
        int k = removeDuplicates(nums);
        cout << "k = " << k << ", nums = [";
        for (int i = 0; i < k; ++i) {
            if (i) cout << ", ";
            cout << nums[i];
        }
        cout << "]\n";
    }
    return 0;
}
