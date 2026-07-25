#include <bits/stdc++.h>
using namespace std;

unsigned long long magnitude_ll(long long n) {
    if (n >= 0) return static_cast<unsigned long long>(n);
    // Convert negative to magnitude without overflow (handles LLONG_MIN)
    return 0ULL - static_cast<unsigned long long>(n);
}

int countDigits(long long n) {
    unsigned long long x = magnitude_ll(n);
    if (x == 0) return 1;
    int cnt = 0;
    while (x > 0) {
        ++cnt;
        x /= 10;
    }
    return cnt;
}

int main() {
    vector<long long> tests = {
        0,
        7,
        12345,
        -1000,
        LLONG_MIN,
        LLONG_MAX
    };

    for (long long n : tests) {
        cout << "n = " << n << " -> digits = " << countDigits(n) << "\n";
    }
    return 0;
}
