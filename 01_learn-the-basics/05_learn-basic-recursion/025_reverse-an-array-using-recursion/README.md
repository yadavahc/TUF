# Reverse an Array Using Recursion

> **Source:** [https://leetcode.com/problems/reverse-string/](https://leetcode.com/problems/reverse-string/)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

Use the call stack to progressively swap symmetric elements from the ends towards the center. At each recursive call, bring the left and right pointers closer by one and stop when they cross. This mirrors the standard two-pointer reversal but expressed recursively.

## Approach

Define a helper function that takes the array and two indices (left, right). If left >= right, return; otherwise swap arr[left] and arr[right], then recurse on (left+1, right-1). Brute force (for contrast): create a new array and copy elements in reverse order, which uses extra space.

## Algorithm

1. Initialize two indices: left = 0 and right = n-1.
2. Base case: if left >= right, return (array is fully reversed).
3. Swap arr[left] with arr[right].
4. Recurse with left+1 and right-1.
5. The top-level function calls the helper with (0, n-1).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since each element is visited/swapped at most once. |
| **Space** | O(n) auxiliary, due to the recursion call stack depth up to n/2. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
