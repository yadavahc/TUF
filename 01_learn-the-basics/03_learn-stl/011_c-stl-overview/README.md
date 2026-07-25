# C++ STL Overview

> **Source:** [https://www.geeksforgeeks.org/the-c-standard-template-library-stl/](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
> **Topic:** Step 1: Learn the Basics — Learn STL
> **Difficulty:** Easy

## Intuition

Mastering STL means picking the right container and algorithm so common tasks become one-liners with optimal complexity. Use vector for dynamic arrays, set/map for ordered unique storage and log-time queries, unordered_map for average O(1) hashing, and priority_queue for heap behaviors. Algorithms like sort, binary_search, lower_bound, reverse, and accumulate are highly optimized and generic. Small, composable STL pieces replace verbose manual code.

## Approach

Use appropriate STL containers and algorithms: sort and unique for deduplication, set/map for ordered operations, unordered_map for frequency counting, priority_queue for k-smallest, and standard algorithms (binary_search, lower_bound, reverse, accumulate). Brute force manual implementations of these structures are unnecessary and slower; the STL variants are optimal and battle-tested.

## Algorithm

1. Store input data in vector; demonstrate sort (ascending/descending) and unique to deduplicate.
2. Perform binary_search and lower_bound on the sorted vector.
3. Build a set from the data to get unique, ordered elements.
4. Count frequencies with unordered_map; sort pairs by (count desc, value asc).
5. Use a min-heap (priority_queue with greater) to extract k smallest elements.
6. Reverse a string via reverse and also via stack; compute sum via accumulate.
7. Showcase deque push/pop and map lookups to illustrate typical STL usage.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n log n) overall, dominated by sorting and ordered set/map operations; other demonstrations are O(n) or O(log n). |
| **Space** | O(n) additional space for auxiliary containers (set/map/heap/vectors) used in the demonstration. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
