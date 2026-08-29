#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = (int)nums.size();
    int xr = 0;
    for (int i = 0; i < n; ++i) {
        xr ^= i;
        xr ^= nums[i];
    }
    xr ^= n;
    return xr;
}

int main() {
    vector<vector<int>> tests = {
        {3, 0, 1},                 // missing = 2
        {0, 1},                    // missing = 2
        {9, 6, 4, 2, 3, 5, 7, 0, 1} // missing = 8
    };

    for (auto nums : tests) {
        vector<int> copy = nums;
        int ans = missingNumber(copy);
        cout << "Missing number: " << ans << "\n";
    }
    return 0;
}
