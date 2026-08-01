#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n, const string& s) {
    if (n <= 0) return;          // Base case
    cout << s << '\n';           // Work
    printNTimes(n - 1, s);       // Recursive call
}

int main() {
    // Sample 1
    cout << "Sample 1 (n=3, s='Striver'):\n";
    printNTimes(3, "Striver");

    // Separator
    cout << "----\n";

    // Sample 2
    cout << "Sample 2 (n=5, s='GFG'):\n";
    printNTimes(5, "GFG");

    // Separator
    cout << "----\n";

    // Sample 3 (edge case n=0: prints nothing for the string)
    cout << "Sample 3 (n=0, s='Hello'):\n";
    printNTimes(0, "Hello");

    return 0;
}
