# Print Subarray with Maximum Subarray Sum

> **Source:** [https://takeuforward.org/arrays/print-the-subarray-with-maximum-sum/](https://takeuforward.org/arrays/print-the-subarray-with-maximum-sum/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Medium

## Intuition

Kadane’s algorithm observes that a negative running sum can never help any future subarray, so we reset the run when it dips below zero. While scanning, whenever the running sum becomes the best so far, we record the current segment’s boundaries. This way we get both the maximum sum and the exact subarray in one pass. Handle the all-negative case naturally by initializing the best sum to −∞ and updating on every element.

## Approach

- Brute force checks all O(n^2) subarrays; we optimize to O(n) using Kadane.
- Maintain a running sum and a tentative start index. If the running sum goes negative, reset it and move the start forward.
- When the running sum exceeds the best sum seen, store the current segment [start, i] as the answer.

## Algorithm

1. Initialize bestSum = −∞, currSum = 0, start = 0, bestL = 0, bestR = 0.
2. For i from 0 to n−1:
   - currSum += a[i].
   - If currSum > bestSum: set bestSum = currSum, bestL = start, bestR = i.
   - If currSum < 0: set currSum = 0 and start = i + 1.
3. The maximum-sum subarray is a[bestL..bestR]. Extract it and report bestSum and the subarray.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as we scan the array once. |
| **Space** | O(1) auxiliary space; only a few variables are tracked (output subarray itself is not counted as extra space). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
