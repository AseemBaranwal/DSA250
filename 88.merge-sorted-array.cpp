/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

// Note 1: Solvong it in O(N * log N) is very easy where N is (m+n).
// Trying to implement the follow up question is the tricky part

// Time Complexity: O(m+n)
// Space Complexity: O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Traversing in the reverse order as the problem has to be done without overwriting the existing values
        int nums1Idx = m-1, nums2Idx = n-1, idx = m+n-1;
        while(nums1Idx >= 0 and nums2Idx >= 0){
            if(nums1[nums1Idx] >= nums2[nums2Idx]){
                nums1[idx--] = nums1[nums1Idx--];
            }else{
                nums1[idx--] = nums2[nums2Idx--];
            }
        }
        while(nums1Idx >= 0){
            nums1[idx--] = nums1[nums1Idx--];
        }
        while(nums2Idx >= 0){
            nums1[idx--] = nums2[nums2Idx--];
        }
    }
};
// @lc code=end

