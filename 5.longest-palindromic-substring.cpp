/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1) return s;
        int n = s.length();
        int start = 0, end = 0;
        int max_len = 1;
        //string length is odd
        for(int i = 0; i < n; i++) {
            int left = i, right = i;
            while(left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            int len = right - left - 1;
            if(len > max_len) {
                max_len = len;
                start = left + 1;
                end = right - 1;
            }
        }

        //string length is even
        for(int i = 0; i < n; i++) {
            int left = i, right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            int len = right - left - 1;
            if(len > max_len) {
                max_len = len;
                start = left + 1;
                end = right - 1;
            }
        }

        return s.substr(start, max_len);

    }
};
// @lc code=end
