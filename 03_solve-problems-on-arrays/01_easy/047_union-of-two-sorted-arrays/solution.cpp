#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoSortedArrays(const vector<int>& a, const vector<int>& b) {
    int n = (int)a.size(), m = (int)b.size();
    int i = 0, j = 0;
    vector<int> res;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            // If equal, advance both; otherwise only i advanced above.
            if (a[i] == b[j]) j++;
            i++;
        } else {
            if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
            j++;
        }
    }
    while (i < n) {
        if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
        i++;
    }
    while (j < m) {
        if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
        j++;
    }
    return res;
}

void printVec(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    // Test 1
    vector<int> a1 = {1, 1, 2, 3, 4, 5};
    vector<int> b1 = {2, 2, 3, 5, 6};
    auto u1 = unionOfTwoSortedArrays(a1, b1);
    cout << "Test 1 union: ";
    printVec(u1); // Expected: 1 2 3 4 5 6

    // Test 2 (one empty)
    vector<int> a2 = {};
    vector<int> b2 = {0, 0, 0};
    auto u2 = unionOfTwoSortedArrays(a2, b2);
    cout << "Test 2 union: ";
    printVec(u2); // Expected: 0

    // Test 3 (negatives and duplicates)
    vector<int> a3 = {-5, -3, -3, 0, 1, 2, 2, 10};
    vector<int> b3 = {-10, -3, 2, 2, 3, 4, 10, 10};
    auto u3 = unionOfTwoSortedArrays(a3, b3);
    cout << "Test 3 union: ";
    printVec(u3); // Expected: -10 -5 -3 0 1 2 3 4 10

    return 0;
}
