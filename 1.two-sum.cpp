/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        map<int, int> hmap;
        for(int i = 0; i <= nums.size(); i++){
            int complement = target - nums[i];
            if(hmap.find(complement) != hmap.end()){
                indices.push_back(i);
                indices.push_back(hmap.find(complement)->second);
                break;
            }
            hmap.insert(pair<int,int>(nums[i], i));
        }
    
        return indices;
    }
};
// @lc code=end

