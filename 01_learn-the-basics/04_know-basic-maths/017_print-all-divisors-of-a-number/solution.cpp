#include <bits/stdc++.h>
using namespace std;

vector<long long> getDivisorsSorted(long long n) {
    vector<long long> small, large;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            small.push_back(i);
            if (i != n / i) large.push_back(n / i);
        }
    }
    reverse(large.begin(), large.end());
    small.insert(small.end(), large.begin(), large.end());
    return small;
}

int main() {
    vector<long long> tests = {1, 36, 97};
    for (long long n : tests) {
        cout << "Divisors of " << n << ": ";
        auto d = getDivisorsSorted(n);
        for (size_t i = 0; i < d.size(); ++i) {
            if (i) cout << ' ';
            cout << d[i];
        }
        cout << "\n";
    }
    return 0;
}
