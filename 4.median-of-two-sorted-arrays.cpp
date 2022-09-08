/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m > n) return findMedianSortedArrays(nums2, nums1);

        int low = 0, high = m;
        while(low <= high){
            int partition1 = (low + high) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            //consider edge cases
            int Left1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int Left2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];

            int Right1 = (partition1 == m) ? INT_MAX : nums1[partition1];
            int Right2 = (partition2 == n) ? INT_MAX : nums2[partition2];

            if(Left1 <= Right2 && Left2 <= Right1) { 
                if((m + n) % 2 == 0) {
                    return (max(Left1, Left2) + min(Right1, Right2)) / 2.0;
                }
                else {
                    return max(Left1, Left2);
                }
            }
            else if (Left1 >= Right2){
                high = partition1 - 1;
            }
            else {
                low = partition1 + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

