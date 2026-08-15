#include <bits/stdc++.h>
using namespace std;

class MergeSorter {
public:
    void sort(vector<int>& a) {
        if (a.empty()) return;
        temp.assign(a.size(), 0);
        mergeSort(a, 0, (int)a.size() - 1);
    }
private:
    vector<int> temp;

    void mergeSort(vector<int>& a, int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        // Optimization: if already sorted, skip merge
        if (a[m] <= a[m + 1]) return;
        merge(a, l, m, r);
    }

    void merge(vector<int>& a, int l, int m, int r) {
        int i = l, j = m + 1, k = l;
        while (i <= m && j <= r) {
            if (a[i] <= a[j]) temp[k++] = a[i++];
            else temp[k++] = a[j++];
        }
        while (i <= m) temp[k++] = a[i++];
        while (j <= r) temp[k++] = a[j++];
        for (int p = l; p <= r; ++p) a[p] = temp[p];
    }
};

static void printVec(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

int main() {
    MergeSorter ms;

    vector<int> a1 = {5, 2, 3, 1};
    ms.sort(a1);
    printVec(a1); // 1 2 3 5

    vector<int> a2 = {3, -1, 2, -1, 0, 3};
    ms.sort(a2);
    printVec(a2); // -1 -1 0 2 3 3

    vector<int> a3 = {1, 2, 3, 4, 5, 6};
    ms.sort(a3);
    printVec(a3); // 1 2 3 4 5 6

    return 0;
}
