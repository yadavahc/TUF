#include <bits/stdc++.h>
using namespace std;

vector<string> forLoops(int a, int b) {
    static const vector<string> words = {
        "one","two","three","four","five","six","seven","eight","nine"
    };
    vector<string> res;
    for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) res.push_back(words[i - 1]);
        else res.push_back((i % 2 == 0) ? "even" : "odd");
    }
    return res;
}

int main() {
    vector<pair<int,int>> tests = {
        {8, 11},
        {1, 3},
        {9, 9}
    };
    for (auto [a, b] : tests) {
        cout << "Input: " << a << " " << b << "\nOutput:\n";
        auto out = forLoops(a, b);
        for (auto &s : out) cout << s << "\n";
        cout << "\n";
    }
    return 0;
}
