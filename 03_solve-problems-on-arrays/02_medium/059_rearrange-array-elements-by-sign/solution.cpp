#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayBySign(const vector<int>& nums) {
    int n = (int)nums.size();
    vector<int> res(n);
    int pos = 0, neg = 1;
    for (int x : nums) {
        if (x > 0) {
            res[pos] = x;
            pos += 2;
        } else {
            res[neg] = x;
            neg += 2;
        }
    }
    return res;
}

void printVector(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    vector<vector<int>> tests = {
        {3, 1, -2, -5, 2, -4},
        {-1, 1},
        {2, -3, 1, -5}
    };
    for (auto& t : tests) {
        auto ans = rearrangeArrayBySign(t);
        printVector(ans);
    }
    return 0;
}
