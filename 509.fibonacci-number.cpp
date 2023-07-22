/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        int sum=0;
        if(n==0||n==1){
            return n;
        }
        
        return fib(n-1)+fib(n-2);
        return sum;
    }
};
// @lc code=end

