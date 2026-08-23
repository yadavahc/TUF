# Remove Duplicates from Sorted Array

> **Source:** [https://leetcode.com/problems/remove-duplicates-from-sorted-array/](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
> **Topic:** Step 3: Solve Problems on Arrays — Easy
> **Difficulty:** Easy

## Intuition

Because the array is sorted, duplicates appear in consecutive blocks. We can keep a write pointer for the next unique position and scan once with a read pointer. Whenever we encounter a new value different from the last written one, we place it at the write position and advance it. This preserves order and removes duplicates in-place.

## Approach

Use two pointers: j as the write index for unique elements and i to iterate. Initialize j = 1 if non-empty; for each i from 1 to n-1, if nums[i] != nums[j-1], assign nums[j] = nums[i] and increment j. Brute force using a set or extra array would need extra space and is unnecessary due to the sorted property.

## Algorithm

1. If the array is empty, return 0.
2. Set write index j = 1.
3. For i from 1 to n-1:
   - If nums[i] != nums[j-1], set nums[j] = nums[i] and increment j.
4. Return j as the count of unique elements (first j elements are the result).

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), single linear pass through the array. |
| **Space** | O(1), in-place without extra structures. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
