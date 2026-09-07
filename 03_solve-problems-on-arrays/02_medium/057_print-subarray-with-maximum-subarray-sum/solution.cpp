#include <bits/stdc++.h>
using namespace std;

struct Result {
    long long maxSum;
    int left;
    int right;
    vector<int> subarray;
};

Result maxSubarrayWithIndices(const vector<int>& a) {
    int n = (int)a.size();
    long long currSum = 0;
    long long bestSum = LLONG_MIN;
    int start = 0, bestL = 0, bestR = 0;

    for (int i = 0; i < n; ++i) {
        currSum += (long long)a[i];

        if (currSum > bestSum) {
            bestSum = currSum;
            bestL = start;
            bestR = i;
        }

        if (currSum < 0) {
            currSum = 0;
            start = i + 1;
        }
    }

    vector<int> sub;
    if (n > 0) sub.assign(a.begin() + bestL, a.begin() + bestR + 1);
    return {bestSum, bestL, bestR, sub};
}

void runTest(const vector<int>& a) {
    Result res = maxSubarrayWithIndices(a);
    cout << "Array: [";
    for (size_t i = 0; i < a.size(); ++i) {
        if (i) cout << ", ";
        cout << a[i];
    }
    cout << "]\n";
    cout << "Max Sum: " << res.maxSum << "\n";
    cout << "Subarray indices (0-based): [" << res.left << ", " << res.right << "]\n";
    cout << "Subarray: [";
    for (size_t i = 0; i < res.subarray.size(); ++i) {
        if (i) cout << ", ";
        cout << res.subarray[i];
    }
    cout << "]\n";
    cout << "----\n";
}

int main() {
    // Sample tests
    runTest({1, -2, 3, 4, -1, 2, 1, -5, 4});        // Expected subarray: [3, 4, -1, 2, 1], sum = 9
    runTest({-8, -3, -6, -2, -5, -4});              // Expected subarray: [-2], sum = -2
    runTest({5, -1, 5});                            // Expected subarray: [5, -1, 5], sum = 9
    return 0;
}
