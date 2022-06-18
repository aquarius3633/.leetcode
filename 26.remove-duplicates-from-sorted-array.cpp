/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != nums[unique]){
                unique++;
                nums[unique] = nums[i];
            }
        }
        return unique+1;
    }
};
// @lc code=end

