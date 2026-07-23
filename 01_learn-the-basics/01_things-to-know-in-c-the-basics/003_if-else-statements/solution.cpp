#include <bits/stdc++.h>
using namespace std;

// Classify an integer as "Even" or "Odd" using bitwise parity check.
string classifyEvenOdd(long long n) {
    return (n & 1LL) ? "Odd" : "Even";
}

int main() {
    // Hardcoded sample inputs to demonstrate correctness, including edge cases.
    vector<long long> tests = {0, 7, -4, 13, -1, 2};
    for (auto x : tests) {
        cout << x << " -> " << classifyEvenOdd(x) << "\n";
    }
    return 0;
}
