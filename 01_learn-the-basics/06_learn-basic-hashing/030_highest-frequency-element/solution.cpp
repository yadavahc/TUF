#include <bits/stdc++.h>
using namespace std;

int highestFrequencyElement(const vector<int>& arr) {
    if (arr.empty()) return 0; // or throw; problem usually assumes non-empty
    unordered_map<int,int> freq;
    freq.reserve(arr.size() * 2);
    for (int x : arr) freq[x]++;

    int bestCount = -1;
    int ans = INT_MAX;
    for (const auto& p : freq) {
        int val = p.first, cnt = p.second;
        if (cnt > bestCount || (cnt == bestCount && val < ans)) {
            bestCount = cnt;
            ans = val;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> tests = {
        {1, 3, 2, 1, 4, 1, 3, 3},   // 1 and 3 have freq 3 -> pick smallest => 1
        {10, -1, -1, 10, 10, -1},   // tie at 3 -> pick -1
        {5}                         // single element
    };
    for (const auto& t : tests) {
        cout << highestFrequencyElement(t) << "\n";
    }
    return 0;
}
