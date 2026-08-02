#include <bits/stdc++.h>
using namespace std;

void printNameNTimes(int n, const string& name) {
    if (n <= 0) return;
    cout << name << "\n";
    printNameNTimes(n - 1, name);
}

int main() {
    // Sample 1
    cout << "Sample 1:\n";
    printNameNTimes(5, "Striver");
    cout << "---\n";

    // Sample 2
    cout << "Sample 2:\n";
    printNameNTimes(1, "DSA");
    cout << "---\n";

    // Sample 3 (edge case: n = 0, prints nothing)
    cout << "Sample 3 (n=0):\n";
    printNameNTimes(0, "Hello");
    cout << "---\n";

    return 0;
}
