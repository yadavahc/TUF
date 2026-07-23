#include <bits/stdc++.h>
using namespace std;

void swapByRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // Test 1: Distinct positive numbers
    {
        int a = 5, b = 10;
        cout << "Before: " << a << " " << b << "\n";
        swapByRef(a, b);
        cout << "After:  " << a << " " << b << "\n\n";
    }

    // Test 2: Including a negative number
    {
        int a = -3, b = 8;
        cout << "Before: " << a << " " << b << "\n";
        swapByRef(a, b);
        cout << "After:  " << a << " " << b << "\n\n";
    }

    // Test 3: Equal numbers
    {
        int a = 7, b = 7;
        cout << "Before: " << a << " " << b << "\n";
        swapByRef(a, b);
        cout << "After:  " << a << " " << b << "\n";
    }

    return 0;
}
