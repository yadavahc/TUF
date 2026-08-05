#include <bits/stdc++.h>
using namespace std;

long long sumOfFirstN(long long n) {
    if (n <= 0) return 0;
    return n + sumOfFirstN(n - 1);
}

int main() {
    vector<long long> tests = {0, 5, 10};
    for (long long n : tests) {
        cout << "Sum of first " << n << " numbers = " << sumOfFirstN(n) << "\n";
    }
    return 0;
}
