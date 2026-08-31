#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(const vector<int>& nums) {
        int ans = 0;
        for (int x : nums) ans ^= x;
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 2, 1};
    vector<int> nums2 = {4, 1, 2, 1, 2};
    vector<int> nums3 = {-1, -1, -3};

    cout << sol.singleNumber(nums1) << "\n"; // Expected: 1
    cout << sol.singleNumber(nums2) << "\n"; // Expected: 4
    cout << sol.singleNumber(nums3) << "\n"; // Expected: -3

    return 0;
}
