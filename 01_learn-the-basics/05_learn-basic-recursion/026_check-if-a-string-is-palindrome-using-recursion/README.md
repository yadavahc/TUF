# Check if a String is Palindrome Using Recursion

> **Source:** [https://www.geeksforgeeks.org/problems/palindrome-string0817/1](https://www.geeksforgeeks.org/problems/palindrome-string0817/1)
> **Topic:** Step 1: Learn the Basics — Learn Basic Recursion
> **Difficulty:** Easy

## Intuition

A palindrome reads the same from both ends. Recursively compare characters at symmetric positions (left and right) and shrink the window inward. If all pairs match until the pointers cross, it’s a palindrome; the first mismatch fails fast. The base case is when left >= right.

## Approach

Use a two-pointer recursive helper: compare s[l] and s[r]; if equal, recurse on l+1, r-1; if not, return false. Base case returns true when l >= r. Brute force (reversing the string and comparing) is simple but here we implement the recursive check directly.

## Algorithm

1. Define helper(s, l, r):
   - If l >= r, return true.
   - If s[l] != s[r], return false.
   - Return helper(s, l+1, r-1).
2. For input string s, return helper(s, 0, n-1).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — each character is compared at most once with its counterpart. |
| **Space** | O(n) — recursion stack depth is at most n/2 in the worst case. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
