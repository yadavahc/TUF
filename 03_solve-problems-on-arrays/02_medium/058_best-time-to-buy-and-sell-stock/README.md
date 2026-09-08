# Best Time to Buy and Sell Stock

> **Source:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
> **Topic:** Step 3: Solve Problems on Arrays — Medium
> **Difficulty:** Easy

## Intuition

We want to buy at the lowest price seen so far and sell later at a higher price. As we scan prices, keep track of the minimum price up to the current day and the best profit achievable by selling today. This avoids re-checking pairs and ensures we respect the buy-before-sell ordering.

## Approach

Single pass with two variables: minPrice (lowest seen so far) and maxProfit (best profit so far). For each price, update maxProfit with price - minPrice, then update minPrice with the current price if it's smaller. Brute force would check all pairs in O(n^2), but this optimized pass is O(n).

## Algorithm

1. Initialize minPrice = +infinity and maxProfit = 0.
2. For each price p in prices:
   - Update maxProfit = max(maxProfit, p - minPrice).
   - Update minPrice = min(minPrice, p).
3. Return maxProfit.

## Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n), as we make a single pass through the array. |
| **Space** | O(1), using only a couple of variables. |

---
*Solution: [`solution.cpp`](./solution.cpp) — compiled & verified with `g++ -std=c++17`.*
