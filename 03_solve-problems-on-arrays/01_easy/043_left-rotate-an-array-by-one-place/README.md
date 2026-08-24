# Left Rotate an Array by One Place

> **Source:** [https://www.geeksforgeeks.org/problems/rotate-array-by-one-1587115621/1](https://www.geeksforgeeks.org/problems/rotate-array-by-one-1587115621/1)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Rotating left by one means every element moves to the previous index, and the first element wraps to the last position. The key is to preserve the first element, shift the rest in-place, and place the saved element at the end. Handle edge cases like empty or single-element arrays gracefully.

## Approach

Brute force could use an extra array and copy to shifted indices; the optimal in-place method stores the first element, shifts all others left by one, and writes the stored value at the end.

## Algorithm

1. If n <= 1, return (no change needed).
2. Save the first element in a temporary variable temp = a[0].
3. For i from 1 to n-1, set a[i-1] = a[i].
4. Set a[n-1] = temp.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), because each element is moved at most once. |
| **Space** | O(1), only a single temporary variable is used. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
