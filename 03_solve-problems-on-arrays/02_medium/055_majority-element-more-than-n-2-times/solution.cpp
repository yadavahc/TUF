#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int n = (int)nums.size();
    if (n == 0) return -1;

    int candidate = 0, count = 0;
    for (int x : nums) {
        if (count == 0) candidate = x;
        count += (x == candidate) ? 1 : -1;
    }

    // Verify in case majority isn't guaranteed
    int freq = 0;
    for (int x : nums) if (x == candidate) ++freq;
    return (freq > n / 2) ? candidate : -1;
}

int main() {
    vector<vector<int>> tests = {
        {3, 2, 3},
        {2, 2, 1, 1, 1, 2, 2},
        {1, 2, 3}
    };

    for (const auto& v : tests) {
        cout << "Array: ";
        for (int x : v) cout << x << " ";
        cout << "\nMajority Element (> n/2): " << majorityElement(v) << "\n\n";
    }
    return 0;
}
