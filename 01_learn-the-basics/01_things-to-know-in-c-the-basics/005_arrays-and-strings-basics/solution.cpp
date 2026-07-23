#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        mp.reserve(nums.size() * 2);
        mp.max_load_factor(0.7f);
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            auto it = mp.find(need);
            if (it != mp.end()) {
                return {it->second, i};
            }
            // Store the latest index to handle duplicates correctly
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;

    vector<vector<int>> tests = {
        {2, 7, 11, 15},
        {3, 2, 4},
        {3, 3}
    };
    vector<int> targets = {9, 6, 6};

    for (size_t t = 0; t < tests.size(); ++t) {
        vector<int> nums = tests[t];
        int target = targets[t];
        vector<int> ans = sol.twoSum(nums, target);
        cout << "Test " << t+1 << " -> Indices: ";
        if (ans.empty()) {
            cout << "No pair";
        } else {
            cout << "[" << ans[0] << ", " << ans[1] << "]";
        }
        cout << "\n";
    }
    return 0;
}
