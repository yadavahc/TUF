# Leaders in an Array

> **Source:** [https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Easy

## Intuition

Leaders are elements that are not smaller than any element to their right. Scanning from the right lets us maintain the maximum seen so far, making it trivial to decide if the current element is a leader. The rightmost element is always a leader, and any element >= current max-right is also a leader. Collect while scanning and reverse at the end to restore left-to-right order.

## Approach

Traverse the array from right to left, keeping a running maximum. If a[i] >= maxRight, mark it as a leader and update maxRight. Store leaders in a list and reverse it to output in original order. Brute force would compare each element with all elements to its right (O(n^2)), but the right-to-left scan is O(n).

## Algorithm

1. Initialize an empty vector leaders and set maxRight = -infinity.
2. For i from n-1 down to 0:
   - If a[i] >= maxRight, push a[i] into leaders and set maxRight = a[i].
3. Reverse leaders to get them in left-to-right order.
4. Return leaders.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as each element is visited once from right to left. |
| **Space** | O(k) to store k leaders (O(1) auxiliary beyond the output). |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
