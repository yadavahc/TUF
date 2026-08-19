#include <bits/stdc++.h>
using namespace std;

struct QuickSorter {
    mt19937 rng;
    QuickSorter() : rng((uint64_t)chrono::high_resolution_clock::now().time_since_epoch().count()) {}

    int hoarePartition(vector<int>& a, int l, int r) {
        uniform_int_distribution<int> dist(l, r);
        int p = dist(rng);
        swap(a[l], a[p]);
        int pivot = a[l];
        int i = l - 1, j = r + 1;
        while (true) {
            do { ++i; } while (a[i] < pivot);
            do { --j; } while (a[j] > pivot);
            if (i >= j) return j;
            swap(a[i], a[j]);
        }
    }

    void quickSort(vector<int>& a, int l, int r) {
        while (l < r) {
            int m = hoarePartition(a, l, r);
            // Recurse on smaller side to keep stack O(log n)
            if (m - l < r - (m + 1)) {
                quickSort(a, l, m);
                l = m + 1;
            } else {
                quickSort(a, m + 1, r);
                r = m;
            }
        }
    }

    void sort(vector<int>& a) {
        if (!a.empty()) quickSort(a, 0, (int)a.size() - 1);
    }
};

int main() {
    vector<vector<int>> tests = {
        {5, 1, 1, 2, 0, 0},
        {10, -1, 3, 5, 7, 7, 2, 2, 2, 0},
        {9,8,7,6,5,4,3,2,1,0}
    };

    QuickSorter sorter;
    for (auto v : tests) {
        sorter.sort(v);
        for (int i = 0; i < (int)v.size(); ++i) {
            if (i) cout << ' ';
            cout << v[i];
        }
        cout << '\n';
    }
    return 0;
}
