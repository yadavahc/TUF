#include <bits/stdc++.h>
using namespace std;

// Function to generate numbers from 1 to N using a while loop.
vector<int> printOneToN(int N) {
    vector<int> res;
    int i = 1;
    while (i <= N) {
        res.push_back(i);
        ++i;
    }
    return res;
}

int main() {
    vector<int> tests = {5, 1, 10};

    for (int n : tests) {
        vector<int> ans = printOneToN(n);
        for (int i = 0; i < (int)ans.size(); ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}
