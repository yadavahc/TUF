#include <bits/stdc++.h>
using namespace std;

bool isSortedNonDecreasing(const vector<int>& a) {
    for (size_t i = 1; i < a.size(); ++i) {
        if (a[i] < a[i-1]) return false;
    }
    return true;
}

int main() {
    vector<vector<int>> tests = {
        {1, 2, 2, 3, 5},
        {5, 3, 4, 6},
        {10},
    };

    for (const auto& t : tests) {
        cout << (isSortedNonDecreasing(t) ? "true" : "false") << "\n";
    }
    return 0;
}
