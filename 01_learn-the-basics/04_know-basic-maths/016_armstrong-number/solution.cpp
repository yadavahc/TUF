#include <bits/stdc++.h>
using namespace std;

using u128 = unsigned __int128;

// Integer power: base^exp using repeated multiplication (exp is small: number of digits)
static inline u128 ipow_u128(unsigned int base, int exp) {
    u128 res = 1;
    for (int i = 0; i < exp; ++i) res *= base;
    return res;
}

bool isArmstrong(long long n) {
    if (n < 0) return false; // Armstrong numbers are for non-negative integers
    unsigned long long un = static_cast<unsigned long long>(n);

    // Count digits
    int d = (un == 0) ? 1 : 0;
    for (unsigned long long t = un; t > 0; t /= 10) ++d;

    // Precompute i^d for i in [0..9]
    u128 powtab[10];
    for (int i = 0; i <= 9; ++i) powtab[i] = ipow_u128(i, d);

    // Sum of powered digits
    u128 sum = 0;
    if (un == 0) {
        sum += powtab[0];
    } else {
        for (unsigned long long t = un; t > 0; t /= 10) {
            int dig = static_cast<int>(t % 10);
            sum += powtab[dig];
        }
    }

    return sum == static_cast<u128>(un);
}

int main() {
    vector<long long> tests = {
        153,      // 3-digit Armstrong
        9474,     // 4-digit Armstrong
        123,      // not Armstrong
        0,        // Armstrong by convention (0^1 = 0)
        -370,     // negative -> false
        548834,   // 6-digit Armstrong
        9926315   // 7-digit Armstrong
    };

    for (long long x : tests) {
        cout << x << " -> " << (isArmstrong(x) ? "Yes" : "No") << '\n';
    }
    return 0;
}
