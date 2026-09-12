#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(const vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> st;
        st.reserve(nums.size() * 2);
        st.max_load_factor(0.7f);
        for (int x : nums) st.insert(x);

        int best = 0;
        for (int x : nums) {
            if (!st.count(x - 1)) { // start of a sequence
                int cur = x;
                int len = 1;
                while (st.count(cur + 1)) {
                    cur++;
                    len++;
                }
                if (len > best) best = len;
            }
        }
        return best;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> tests = {
        {100, 4, 200, 1, 3, 2},          // expected 4 (1,2,3,4)
        {0, 3, 7, 2, 5, 8, 4, 6, 0, 1},  // expected 9 (0..8)
        {1, 2, 0, 1}                     // expected 3 (0,1,2)
    };
    for (const auto& t : tests) {
        cout << sol.longestConsecutive(t) << "\n";
    }
    return 0;
}
