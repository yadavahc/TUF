#include <bits/stdc++.h>
using namespace std;

int largestElement(const vector<int>& arr) {
    if (arr.empty()) {
        // Depending on problem guarantees, this might be undefined.
        // Here we choose to return INT_MIN for an empty array.
        return INT_MIN;
    }
    int maxVal = arr[0];
    for (int x : arr) {
        if (x > maxVal) maxVal = x;
    }
    return maxVal;
}

int main() {
    vector<int> a1 = {1, 8, 3, 2, 10};
    vector<int> a2 = {-5, -1, -7};
    vector<int> a3 = {42};

    cout << "Largest in a1: " << largestElement(a1) << "\n"; // 10
    cout << "Largest in a2: " << largestElement(a2) << "\n"; // -1
    cout << "Largest in a3: " << largestElement(a3) << "\n"; // 42

    return 0;
}
