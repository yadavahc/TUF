#include <bits/stdc++.h>
using namespace std;

struct PatternPrinter {
    // 1) Solid square of stars (n x n)
    static void solidSquare(int n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << '*';
            cout << '\n';
        }
    }

    // 2) Right triangle of stars (1..n)
    static void rightTriangle(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) cout << '*';
            cout << '\n';
        }
    }

    // 3) Inverted right triangle of stars (n..1)
    static void invertedRightTriangle(int n) {
        for (int i = n; i >= 1; --i) {
            for (int j = 0; j < i; ++j) cout << '*';
            cout << '\n';
        }
    }

    // 4) Centered pyramid of stars
    static void centeredPyramid(int n) {
        for (int i = 1; i <= n; ++i) {
            int spaces = n - i;
            int stars = 2 * i - 1;
            for (int s = 0; s < spaces; ++s) cout << ' ';
            for (int k = 0; k < stars; ++k) cout << '*';
            cout << '\n';
        }
    }

    // 5) Inverted centered pyramid of stars
    static void invertedCenteredPyramid(int n) {
        for (int i = n; i >= 1; --i) {
            int spaces = n - i;
            int stars = 2 * i - 1;
            for (int s = 0; s < spaces; ++s) cout << ' ';
            for (int k = 0; k < stars; ++k) cout << '*';
            cout << '\n';
        }
    }

    // 6) Diamond of stars (height 2n-1)
    static void diamond(int n) {
        for (int i = 1; i <= n; ++i) {
            int spaces = n - i, stars = 2 * i - 1;
            for (int s = 0; s < spaces; ++s) cout << ' ';
            for (int k = 0; k < stars; ++k) cout << '*';
            cout << '\n';
        }
        for (int i = n - 1; i >= 1; --i) {
            int spaces = n - i, stars = 2 * i - 1;
            for (int s = 0; s < spaces; ++s) cout << ' ';
            for (int k = 0; k < stars; ++k) cout << '*';
            cout << '\n';
        }
    }

    // 7) Number triangle: 1..i
    static void numberTriangleInc(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int x = 1; x <= i; ++x) cout << x;
            cout << '\n';
        }
    }

    // 8) Number triangle: i repeated i times
    static void numberTriangleRowValue(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int x = 0; x < i; ++x) cout << i;
            cout << '\n';
        }
    }

    // 9) Palindromic number pyramid (centered): i..1..i
    static void palindromicNumberPyramid(int n) {
        for (int i = 1; i <= n; ++i) {
            int spaces = n - i;
            for (int s = 0; s < spaces; ++s) cout << ' ';
            for (int x = i; x >= 1; --x) cout << x;
            for (int x = 2; x <= i; ++x) cout << x;
            cout << '\n';
        }
    }

    // 10) Binary triangle starting with row parity (1 if i is odd, else 0), alternate bits within row
    static void binaryTriangle(int n) {
        for (int i = 1; i <= n; ++i) {
            int bit = (i % 2);
            for (int j = 0; j < i; ++j) {
                cout << bit;
                bit ^= 1;
            }
            cout << '\n';
        }
    }
};

int main() {
    int n1 = 5;
    cout << "Pattern: Solid Square (n=" << n1 << ")\n";
    PatternPrinter::solidSquare(n1);
    cout << "\nPattern: Right Triangle (n=" << n1 << ")\n";
    PatternPrinter::rightTriangle(n1);
    cout << "\nPattern: Centered Pyramid (n=" << n1 << ")\n";
    PatternPrinter::centeredPyramid(n1);

    int n2 = 4;
    cout << "\nPattern: Diamond (n=" << n2 << ")\n";
    PatternPrinter::diamond(n2);
    cout << "\nPattern: Palindromic Number Pyramid (n=" << n2 << ")\n";
    PatternPrinter::palindromicNumberPyramid(n2);
    cout << "\nPattern: Binary Triangle (n=" << n2 << ")\n";
    PatternPrinter::binaryTriangle(n2);

    return 0;
}
