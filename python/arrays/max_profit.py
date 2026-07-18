# You are given an array prices where prices[i] is the price of a given stock on the ith day.
# You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
# Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        # The lowest price we've seen so far
        min_price = float("inf")

        # Best profit found so far
        max_profit = 0

        for price in prices:
            # If we found a cheaper buying price, update it
            if price < min_price:
                min_price = price

            # Profit if we sell today
            profit = price - min_price

            # Keep the best profit
            if profit > max_profit:
                max_profit = profit

        return max_profit