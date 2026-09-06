#include <bits/stdc++.h>
using namespace std;

long long maxSubArray(const vector<int>& nums) {
    if (nums.empty()) return 0; // defined behavior; typical problem guarantees non-empty
    long long cur = nums[0];
    long long ans = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        cur = max<long long>(nums[i], cur + nums[i]);
        ans = max(ans, cur);
    }
    return ans;
}

int main() {
    vector<vector<int>> tests = {
        {-2, 1, -3, 4, -1, 2, 1, -5, 4}, // expected 6
        {1},                             // expected 1
        {-1, -2, -3, -4},               // expected -1
    };
    for (const auto& t : tests) {
        cout << "Array: [";
        for (size_t i = 0; i < t.size(); ++i) {
            if (i) cout << ", ";
            cout << t[i];
        }
        cout << "] -> Max Subarray Sum = " << maxSubArray(t) << "\n";
    }
    return 0;
}
