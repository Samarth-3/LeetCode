/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int size=chars.size();
        while (i<size)
        {
            int j=i+1;
            while(j<size && chars[i]==chars[j]){
                j++;
            }
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansIndex++]=ch;
                }
            }
            i=j;
        }
        return ansIndex;
        
    }
};
// @lc code=end

