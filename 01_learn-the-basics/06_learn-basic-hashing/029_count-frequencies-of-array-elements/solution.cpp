#include <bits/stdc++.h>
using namespace std;

vector<long long> countFrequenciesInPlace(vector<long long>& a) {
    long long n = (long long)a.size();
    long long B = n + 1; // base larger than any valid value in [1..n]
    for (long long i = 0; i < n; ++i) {
        long long val = a[i] % B;          // recover original value even if already incremented
        if (val >= 1 && val <= n) {
            a[val - 1] += B;               // add one occurrence for value 'val'
        }
    }
    vector<long long> freq(n, 0);
    for (long long i = 0; i < n; ++i) {
        freq[i] = a[i] / B;                // frequency of (i+1)
    }
    return freq;
}

int main() {
    // Sample 1
    {
        vector<long long> a = {2, 3, 2, 3, 5};
        auto freq = countFrequenciesInPlace(a);
        cout << "Frequencies for values 1..n (n=5): ";
        for (auto x : freq) cout << x << " ";
        cout << "\n"; // Expected: 0 2 2 0 1
    }
    // Sample 2
    {
        vector<long long> a = {1, 1, 1, 1};
        auto freq = countFrequenciesInPlace(a);
        cout << "Frequencies for values 1..n (n=4): ";
        for (auto x : freq) cout << x << " ";
        cout << "\n"; // Expected: 4 0 0 0
    }
    // Sample 3 (includes values outside 1..n which are ignored)
    {
        vector<long long> a = {1, 5, 1, 0, 3, 7}; // n=6; valid values in [1..6]
        auto freq = countFrequenciesInPlace(a);
        cout << "Frequencies for values 1..n (n=6): ";
        for (auto x : freq) cout << x << " ";
        cout << "\n"; // Expected: 2 0 1 0 1 0
    }
    return 0;
}
