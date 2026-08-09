#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        vector<int> memo(n + 1, -1);
        memo[0] = 0; memo[1] = 1;
        function<int(int)> dfs = [&](int k) -> int {
            if (memo[k] != -1) return memo[k];
            memo[k] = dfs(k - 1) + dfs(k - 2);
            return memo[k];
        };
        return dfs(n);
    }
};

int main() {
    Solution sol;
    vector<int> tests = {0, 5, 30};
    for (int n : tests) {
        cout << "fib(" << n << ") = " << sol.fib(n) << "\n";
    }
    return 0;
}
