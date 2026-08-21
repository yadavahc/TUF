# Second Largest Element in an Array

> **Source:** [https://www.geeksforgeeks.org/problems/second-largest3735/1](https://www.geeksforgeeks.org/problems/second-largest3735/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

We need the second largest distinct value, not just the value at index n-2 after sorting. A single pass is enough: maintain the largest and the second largest seen so far. On each element, update the pair carefully, ensuring duplicates of the maximum don't incorrectly change the second maximum.

## Approach

Brute force would sort and scan from the end; optimized approach scans once while tracking two variables: max and second max. For each number x: if x > max, shift max to second max and set max = x; else if max > x > second max, update second max. At the end, if no second distinct value exists, return -1.

## Algorithm

1. If the array size is less than 2, return -1.
2. Initialize two sentinels: max = -infinity, second = -infinity.
3. For each element x:
   - If x > max: set second = max; max = x.
   - Else if x < max and x > second: set second = x.
4. If second is still -infinity (no distinct second largest), return -1; else return second.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since we scan the array once. |
| **Space** | O(1), only a couple of variables are used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
