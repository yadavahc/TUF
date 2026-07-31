#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;          // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    vector<long long> tests = {
        -5, 0, 1, 2, 3, 4, 5, 25, 97, 1000000007LL
    };
    for (auto n : tests) {
        cout << n << " -> " << (isPrime(n) ? "Prime" : "Not Prime") << "\n";
    }
    return 0;
}
