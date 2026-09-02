#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        unordered_map<long long, int> first; 
        first.reserve(nums.size() * 2 + 1);
        first[0] = -1;  // prefix sum 0 occurs before array start

        long long prefix = 0;
        int best = 0;
        for (int j = 0; j < (int)nums.size(); ++j) {
            prefix += nums[j];

            auto itNeed = first.find(prefix - k);
            if (itNeed != first.end()) {
                best = max(best, j - itNeed->second);
            }
            if (!first.count(prefix)) {
                first[prefix] = j; // store earliest occurrence only
            }
        }
        return best;
    }
};

int main() {
    Solution sol;

    vector<int> a1 = {1, -1, 5, -2, 3};
    int k1 = 3;
    cout << "Test 1: " << sol.maxSubArrayLen(a1, k1) << " (expected 4)" << "\n";

    vector<int> a2 = {-2, -1, 2, 1};
    int k2 = 1;
    cout << "Test 2: " << sol.maxSubArrayLen(a2, k2) << " (expected 2)" << "\n";

    vector<int> a3 = {1, 2, 3, 1, 1, 1, 1};
    int k3 = 3;
    cout << "Test 3: " << sol.maxSubArrayLen(a3, k3) << " (expected 2)" << "\n";

    return 0;
}
