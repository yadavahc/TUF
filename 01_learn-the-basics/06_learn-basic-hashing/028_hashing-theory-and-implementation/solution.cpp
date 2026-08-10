#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> queryFrequencies(const vector<int>& nums, const vector<int>& queries) {
        unordered_map<int,int> freq;
        freq.reserve(nums.size() * 2);
        for (int x : nums) freq[x]++;

        vector<int> ans;
        ans.reserve(queries.size());
        for (int q : queries) {
            auto it = freq.find(q);
            ans.push_back(it == freq.end() ? 0 : it->second);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Test 1
    vector<int> nums1 = {10, 5, 10, 15, 10, 5};
    vector<int> queries1 = {10, 5, 15, 7};
    auto ans1 = sol.queryFrequencies(nums1, queries1);
    cout << "Test 1:\nArray: ";
    for (int x : nums1) cout << x << " ";
    cout << "\nQueries and frequencies:\n";
    for (size_t i = 0; i < queries1.size(); ++i) {
        cout << queries1[i] << " -> " << ans1[i] << "\n";
    }
    cout << "\n";

    // Test 2 (includes negatives and zeros)
    vector<int> nums2 = {0, -1, -1, 2, 0, 3, 2, 2, 3};
    vector<int> queries2 = {-1, 0, 1, 2, 3, 4};
    auto ans2 = sol.queryFrequencies(nums2, queries2);
    cout << "Test 2:\nArray: ";
    for (int x : nums2) cout << x << " ";
    cout << "\nQueries and frequencies:\n";
    for (size_t i = 0; i < queries2.size(); ++i) {
        cout << queries2[i] << " -> " << ans2[i] << "\n";
    }
    cout << "\n";

    // Test 3 (large distinct values)
    vector<int> nums3 = {1000000000, -1000000000, 42, 42, 7};
    vector<int> queries3 = {42, 7, -1000000000, 123};
    auto ans3 = sol.queryFrequencies(nums3, queries3);
    cout << "Test 3:\nArray: ";
    for (int x : nums3) cout << x << " ";
    cout << "\nQueries and frequencies:\n";
    for (size_t i = 0; i < queries3.size(); ++i) {
        cout << queries3[i] << " -> " << ans3[i] << "\n";
    }
    cout << "\n";

    return 0;
}
