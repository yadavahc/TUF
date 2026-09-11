#include <bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(const vector<int>& a) {
    vector<int> leaders;
    long long maxRight = LLONG_MIN;
    for (int i = (int)a.size() - 1; i >= 0; --i) {
        if ((long long)a[i] >= maxRight) {
            leaders.push_back(a[i]);
            maxRight = a[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << " ";
        cout << v[i];
    }
    cout << "\n";
}

int main() {
    vector<vector<int>> tests = {
        {16, 17, 4, 3, 5, 2},          // Expected: 17 5 2
        {10, 22, 12, 3, 0, 6},         // Expected: 22 12 6
        {7, 10, 4, 10, 6, 5, 2},       // Expected (>=): 10 10 6 5 2
    };

    for (const auto& t : tests) {
        auto ans = leadersInArray(t);
        printVector(ans);
    }
    return 0;
}
