/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxLength = 0;
        for(int i = 0; i < s.length(); i++) {
            //vector of chars that has 256 characters capacity and the default value is "false" 
            vector<bool> chars(256);
            for(int j = i; j < s.length(); j++) {
                //check whether the character has been scanned already (true) than break out the inner loop
                if(chars[s[j]]){
                    break;
                }
                else{
                    maxLength = max(maxLength, j - i + 1);
                    //set to true when the character has been scanned
                    chars[s[j]] = true;
                }
            }
        }
        return maxLength;

    }
};
// @lc code=end

