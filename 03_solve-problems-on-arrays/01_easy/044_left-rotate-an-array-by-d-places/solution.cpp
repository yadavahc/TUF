#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& a, long long d) {
    int n = (int)a.size();
    if (n == 0) return;
    // Normalize d to [0, n)
    long long dd = d % n;
    if (dd < 0) dd += n;
    int k = (int)dd;
    if (k == 0) return;
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    reverse(a.begin(), a.end());
}

void printVec(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    {
        vector<int> a = {1, 2, 3, 4, 5};
        long long d = 2;
        leftRotate(a, d);
        cout << "Rotate [1 2 3 4 5] by 2 -> ";
        printVec(a); // Expected: 3 4 5 1 2
    }
    {
        vector<int> a = {10, 20, 30, 40, 50};
        long long d = 7; // Effective rotation: 7 % 5 = 2
        leftRotate(a, d);
        cout << "Rotate [10 20 30 40 50] by 7 -> ";
        printVec(a); // Expected: 30 40 50 10 20
    }
    {
        vector<int> a = {1, 1, 2, 2, 3};
        long long d = 3;
        leftRotate(a, d);
        cout << "Rotate [1 1 2 2 3] by 3 -> ";
        printVec(a); // Expected: 2 3 1 1 2
    }
    return 0;
}
