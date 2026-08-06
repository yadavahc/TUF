#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n <= 1) return 1ULL;
    return n * factorial(n - 1);
}

int main() {
    vector<unsigned int> tests = {0, 1, 5, 10, 20};
    for (auto n : tests) {
        cout << "factorial(" << n << ") = " << factorial(n) << "\n";
    }
    return 0;
}
