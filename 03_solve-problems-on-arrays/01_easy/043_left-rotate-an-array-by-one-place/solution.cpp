#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int>& a) {
    int n = (int)a.size();
    if (n <= 1) return;
    int temp = a[0];
    for (int i = 1; i < n; ++i) {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

string vecToString(const vector<int>& a) {
    stringstream ss;
    ss << "[";
    for (size_t i = 0; i < a.size(); ++i) {
        if (i) ss << ", ";
        ss << a[i];
    }
    ss << "]";
    return ss.str();
}

int main() {
    vector<vector<int>> tests = {
        {1, 2, 3, 4, 5},
        {10},
        {7, 7, 7, 7},
    };

    for (auto v : tests) {
        cout << "Original: " << vecToString(v) << "\n";
        leftRotateByOne(v);
        cout << "Rotated : " << vecToString(v) << "\n\n";
    }
    return 0;
}
