#include <bits/stdc++.h>
using namespace std;

void collectNto1(int n, vector<int>& out) {
    if (n <= 0) return;
    out.push_back(n);
    collectNto1(n - 1, out);
}

vector<int> printNto1(int n) {
    vector<int> out;
    collectNto1(n, out);
    return out;
}

int main() {
    vector<int> tests = {5, 1, 0};
    for (int n : tests) {
        vector<int> res = printNto1(n);
        cout << "N = " << n << " -> ";
        if (res.empty()) {
            cout << "(empty)";
        } else {
            for (int i = 0; i < (int)res.size(); ++i) {
                if (i) cout << ' ';
                cout << res[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
