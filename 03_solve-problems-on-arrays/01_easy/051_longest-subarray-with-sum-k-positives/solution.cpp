#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK_Positive(const vector<int>& a, long long K) {
    int n = (int)a.size();
    int l = 0;
    long long sum = 0;
    int best = 0;
    for (int r = 0; r < n; ++r) {
        sum += a[r];
        while (l <= r && sum > K) {
            sum -= a[l++];
        }
        if (sum == K) {
            best = max(best, r - l + 1);
        }
    }
    return best;
}

int main() {
    {
        vector<int> a = {1, 2, 1, 1, 1, 3, 2, 1, 1, 1};
        long long K = 3;
        cout << "Example 1: " << longestSubarrayWithSumK_Positive(a, K) << "\n"; // Expected 3
    }
    {
        vector<int> a = {5, 1, 3, 2, 2, 1, 1, 2};
        long long K = 5;
        cout << "Example 2: " << longestSubarrayWithSumK_Positive(a, K) << "\n"; // Expected 3 ([2,2,1])
    }
    {
        vector<int> a = {0, 0, 0, 0};
        long long K = 0;
        cout << "Example 3: " << longestSubarrayWithSumK_Positive(a, K) << "\n"; // Expected 4
    }
    return 0;
}
