#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        mp.reserve(nums.size() * 2);
        mp.max_load_factor(0.7f);
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            auto it = mp.find(need);
            if (it != mp.end()) {
                return {it->second, i};
            }
            // store/update current index for value
            mp[nums[i]] = i;
        }
        return {};
    }
};

static void printVec(const vector<int>& v) {
    if (v.empty()) { cout << "[]\n"; return; }
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ", ";
        cout << v[i];
    }
    cout << "]\n";
}

int main() {
    Solution sol;

    // Sample 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    auto ans1 = sol.twoSum(nums1, target1);
    printVec(ans1); // Expected [0, 1]

    // Sample 2: duplicates
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    auto ans2 = sol.twoSum(nums2, target2);
    printVec(ans2); // Expected [1, 2]

    // Sample 3: negative numbers
    vector<int> nums3 = {-1, -2, -3, -4, -5};
    int target3 = -8;
    auto ans3 = sol.twoSum(nums3, target3);
    printVec(ans3); // Expected [2, 4] or [3, 1] depending on order

    return 0;
}
