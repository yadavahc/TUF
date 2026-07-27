#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    long long rev = 0;
    while (x > rev) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return x == rev || x == rev / 10;
}

int main() {
    vector<int> tests = {121, -121, 10, 0, 1221, 12321, 1001, 1002, 1, 11, 21120};
    for (int x : tests) {
        cout << x << " -> " << (isPalindrome(x) ? "true" : "false") << "\n";
    }
    return 0;
}
