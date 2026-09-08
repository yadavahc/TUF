#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int p : prices) {
            if (p - minPrice > maxProfit) {
                maxProfit = p - minPrice;
            }
            if (p < minPrice) {
                minPrice = p;
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};
    vector<int> prices3 = {2, 4, 1};

    cout << "Max Profit (case 1): " << sol.maxProfit(prices1) << "\n"; // Expected 5
    cout << "Max Profit (case 2): " << sol.maxProfit(prices2) << "\n"; // Expected 0
    cout << "Max Profit (case 3): " << sol.maxProfit(prices3) << "\n"; // Expected 2

    return 0;
}
