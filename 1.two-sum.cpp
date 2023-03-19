/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start


// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lastIndex;
        for(int i = 0; i < nums.size(); i++){
            if(lastIndex.find(target - nums[i])!= lastIndex.end())
                return {lastIndex[target - nums[i]], i};
            lastIndex[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

