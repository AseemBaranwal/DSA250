/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

// Started with solving from the opposite with the ZeroIdx at the end, however that reverses the order
// Hence new approach start the zeroIdx from 0 and nonZeroIdx = zeroIdx + 1 and then whenever zeroIdx has zero
// And nonZeroIdx has non-zero Idx, swap them

// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroIdx = 0;
        int idx = 0;
        while(idx < nums.size()){
            if(nums[idx] == 0) idx++;
            else if(nums[zeroIdx] != 0){
                zeroIdx++;
                idx++;
            }
            else
                swap(nums[idx++], nums[zeroIdx++]);
        }
    }
};
// @lc code=end

