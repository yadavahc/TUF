#include <bits/stdc++.h>
using namespace std;

struct ComplexityAnalyzer {
    static int floor_log2_ull(unsigned long long n) {
        // n must be > 0
        return 63 - __builtin_clzll(n);
    }

    static unsigned long long countLinear(unsigned long long n) {
        return n;
    }

    static unsigned long long countQuadraticFull(unsigned long long n) {
        return n * n;
    }

    static unsigned long long countQuadraticTriangular(unsigned long long n) {
        return n * (n + 1) / 2;
    }

    static unsigned long long countLog(unsigned long long n) {
        if (n == 0) return 0;
        return (unsigned long long)floor_log2_ull(n) + 1; // counts j=1,2,4,... while j<=n
    }

    static unsigned long long countSqrt(unsigned long long n) {
        return (unsigned long long)floor(sqrtl((long double)n));
    }

    // Sum_{i=1..n} (floor(log2(i)) + 1)
    static unsigned long long countNLogN(unsigned long long n) {
        if (n == 0) return 0;
        int L = floor_log2_ull(n);               // floor log2(n)
        unsigned long long P = 1ULL << L;        // 2^L

        // Sum_{k=0}^{L-1} k * 2^k = (L-2)*2^L + 2  (using m=L-1 in formula (m-1)*2^{m+1}+2)
        long long firstPart = 0;
        if (L >= 1) firstPart = ((long long)L - 2) * (long long)P + 2;
        else firstPart = 0;

        unsigned long long sumFloors = (unsigned long long)firstPart + (unsigned long long)L * (n - P + 1ULL);
        return sumFloors + n; // add +1 for each i from 1..n
    }
};

int main() {
    vector<unsigned long long> samples = {10ULL, 200ULL, 1000000ULL};

    for (auto n : samples) {
        cout << "N = " << n << "\n";
        cout << "  Linear (for i=1..n): " << ComplexityAnalyzer::countLinear(n) << "\n";
        cout << "  Quadratic full (for i=1..n, j=1..n): " << ComplexityAnalyzer::countQuadraticFull(n) << "\n";
        cout << "  Quadratic triangular (for i=1..n, j=1..i): " << ComplexityAnalyzer::countQuadraticTriangular(n) << "\n";
        cout << "  Logarithmic (j*=2 while j<=n): " << ComplexityAnalyzer::countLog(n) << "\n";
        cout << "  N log N (for i=1..n, j*=2 while j<=i): " << ComplexityAnalyzer::countNLogN(n) << "\n";
        cout << "  Square-root (i*i<=n): " << ComplexityAnalyzer::countSqrt(n) << "\n";
        cout << "\n";
    }
    return 0;
}
