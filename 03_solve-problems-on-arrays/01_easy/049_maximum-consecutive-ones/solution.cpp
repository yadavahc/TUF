#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(const vector<int>& nums) {
    int maxLen = 0, curr = 0;
    for (int x : nums) {
        if (x == 1) {
            curr++;
            if (curr > maxLen) maxLen = curr;
        } else {
            curr = 0;
        }
    }
    return maxLen;
}

int main() {
    vector<vector<int>> tests = {
        {1,1,0,1,1,1},      // expected 3
        {1,0,1,1,0,1},      // expected 2
        {0,0,0},            // expected 0
        {1,1,1,1,1}         // expected 5
    };

    for (const auto& t : tests) {
        cout << findMaxConsecutiveOnes(t) << "\n";
    }
    return 0;
}
