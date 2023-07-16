/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
 void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        return;
    }
    // void reverseString(vector<char>& s) {
    //     int e=s.size()-1;
    //     int start=0;
    //     while(start<e){
    //         swap(s[start++],s[e--]);
    //     }
    // }
};
// @lc code=end

