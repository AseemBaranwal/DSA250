/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, mn = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            mn = min(mn, prices[i]);
            res = max(res, prices[i] - mn);
        }
        return res;
    }
};
// @lc code=end

