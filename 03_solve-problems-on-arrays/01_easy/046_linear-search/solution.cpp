#include <bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int>& arr, int x) {
    for (int i = 0; i < (int)arr.size(); ++i) {
        if (arr[i] == x) return i; // return first occurrence
    }
    return -1;
}

int main() {
    vector<int> a1 = {1, 3, 5, 7, 9};
    vector<int> a2 = {5, 5, 5, 5};
    vector<int> a3 = {};

    cout << "Test 1 (expect 3): " << linearSearch(a1, 7) << "\n";
    cout << "Test 2 (expect 0): " << linearSearch(a2, 5) << "\n";
    cout << "Test 3 (expect -1): " << linearSearch(a1, 8) << "\n";
    cout << "Test 4 (expect -1): " << linearSearch(a3, 1) << "\n";
    return 0;
}
