#include <bits/stdc++.h>
using namespace std;

int lowestFrequencyElement(const vector<int>& a) {
    if (a.empty()) return 0; // or handle as needed
    unordered_map<int, int> freq;
    freq.reserve(a.size() * 2);
    for (int x : a) ++freq[x];

    int ans = 0, minFreq = INT_MAX;
    bool have = false;
    for (const auto& p : freq) {
        int val = p.first, cnt = p.second;
        if (!have || cnt < minFreq || (cnt == minFreq && val < ans)) {
            have = true;
            minFreq = cnt;
            ans = val;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> tests = {
        {1, 2, 2, 3, 3, 3},         // lowest frequency: 1 (freq 1)
        {4, 4, 5, 5, 6, 7, 7, 7, 6},// min freq 2 among {4,5,6} -> pick 4
        {10},                       // only element
    };

    for (const auto& t : tests) {
        cout << "Array: ";
        for (int x : t) cout << x << " ";
        cout << "\nLowest frequency element: " << lowestFrequencyElement(t) << "\n\n";
    }
    return 0;
}
