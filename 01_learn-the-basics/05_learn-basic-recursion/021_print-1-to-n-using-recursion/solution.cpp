#include <bits/stdc++.h>
using namespace std;

void printIncreasing(int i, int n) {
    if (i > n) return;
    cout << i;
    if (i < n) cout << ' ';
    printIncreasing(i + 1, n);
}

void print1ToN(int n) {
    if (n <= 0) return;
    printIncreasing(1, n);
}

int main() {
    vector<int> tests = {5, 1, 10};
    for (int n : tests) {
        print1ToN(n);
        cout << '\n';
    }
    return 0;
}
