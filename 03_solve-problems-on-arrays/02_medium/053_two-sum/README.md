# Two Sum

> **Source:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Easy

## Intuition

Use a single pass and remember what you've already seen. For each element, the only partner that matters is target - current. If that partner was seen earlier, you have the answer immediately. A hash map lets us check existence and retrieve the index in O(1) average time.

## Approach

Brute force tries all pairs in O(n^2). Optimize by scanning once while storing value -> index in an unordered_map. For each number x at index i, check if (target - x) exists in the map; if yes, return its index and i; else insert x -> i and continue.

## Algorithm

1. Initialize an empty unordered_map<int,int> mp to store value -> index.
2. Iterate i from 0 to n-1:
   - Let need = target - nums[i].
   - If need exists in mp, return {mp[need], i}.
   - Otherwise, set mp[nums[i]] = i.
3. If no pair is found, return an empty vector.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), since each element is processed once with O(1) average-time hash operations. |
| **Space** | O(n), for storing up to n elements in the hash map in the worst case. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
