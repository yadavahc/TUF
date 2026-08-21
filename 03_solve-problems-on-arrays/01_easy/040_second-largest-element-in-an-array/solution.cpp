#include <bits/stdc++.h>
using namespace std;

int secondLargest(const vector<int>& a) {
    if (a.size() < 2) return -1;
    long long mx = LLONG_MIN, smx = LLONG_MIN; // use LLONG_MIN as a safe sentinel
    for (int v : a) {
        long long x = v;
        if (x > mx) {
            smx = mx;
            mx = x;
        } else if (x < mx && x > smx) {
            smx = x;
        }
    }
    if (smx == LLONG_MIN) return -1;
    return static_cast<int>(smx);
}

int main() {
    vector<vector<int>> tests = {
        {10, 5, 10},          // expected 5
        {2},                  // expected -1 (no second distinct)
        {-1, -5, -2, -2}      // expected -2
    };
    for (const auto& t : tests) {
        cout << secondLargest(t) << "\n";
    }
    return 0;
}
