#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

            rev = rev * 10 + digit;
        }
        return rev;
    }
};

int main() {
    Solution sol;
    vector<int> tests = {
        123,          // normal positive
        -123,         // negative
        120,          // trailing zero
        1534236469,   // overflow -> 0
        -2147483412   // near limits
    };

    for (int x : tests) {
        cout << "reverse(" << x << ") = " << sol.reverse(x) << "\n";
    }
    return 0;
}
