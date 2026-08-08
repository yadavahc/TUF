#include <bits/stdc++.h>
using namespace std;

bool isPalHelper(const string &s, int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return isPalHelper(s, l + 1, r - 1);
}

bool isPalindrome(const string &s) {
    return isPalHelper(s, 0, (int)s.size() - 1);
}

int main() {
    vector<string> tests = {
        "racecar",   // true
        "abba",      // true
        "abca",      // false
        "",          // true (empty string)
        "a"          // true
    };

    for (const auto &t : tests) {
        cout << t << " -> " << (isPalindrome(t) ? "true" : "false") << "\n";
    }
    return 0;
}
