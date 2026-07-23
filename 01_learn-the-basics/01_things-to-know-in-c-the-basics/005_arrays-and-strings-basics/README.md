# Arrays and Strings Basics

> **Source:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)
> **Topic:** Step 1: Learn the Basics — Things to Know in C++ - The Basics
> **Difficulty:** Easy

## Intuition

The key idea is to look for a pair that sums to the target. As you scan the array once, remember numbers you've seen and their indices. For the current number x, if target - x was seen before, you have your answer immediately. A hash map enables constant-time lookups to achieve linear time overall.

## Approach

Use an unordered_map to store value -> index for elements seen so far. For each element nums[i], compute need = target - nums[i]; if need exists in the map, return {map[need], i}. Otherwise, insert nums[i] -> i into the map and continue. Brute force would check all pairs in O(n^2), but hashing reduces it to O(1) expected per step.

## Algorithm

1. Initialize an empty unordered_map<int,int> mp.
2. For i from 0 to n-1:
   - need = target - nums[i].
   - If mp contains need, return {mp[need], i}.
   - Else set mp[nums[i]] = i.
3. If no pair found (per problem constraints this shouldn't happen), return an empty vector.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — each element is processed once with O(1) average-time hash lookups/inserts. |
| **Space** | O(n) — the hash map may store up to n elements in the worst case. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
