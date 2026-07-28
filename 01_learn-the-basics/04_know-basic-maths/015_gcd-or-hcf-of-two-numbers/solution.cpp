#include <bits/stdc++.h>
using namespace std;

long long gcd_euclid(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);
    if (a == 0) return b;
    if (b == 0) return a;
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    vector<pair<long long, long long>> tests = {
        {54, 24},      // gcd = 6
        {0, 15},       // gcd = 15
        {-42, 56}      // gcd = 14
    };

    for (auto &p : tests) {
        long long a = p.first, b = p.second;
        cout << "gcd(" << a << ", " << b << ") = " << gcd_euclid(a, b) << "\n";
    }
    return 0;
}
