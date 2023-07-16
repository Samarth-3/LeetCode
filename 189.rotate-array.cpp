/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }

        nums=temp;
        // for(int i=0;i<k;i++){
        //     int n = nums.size();
        //     int temp = nums[n-1];
        //     for (int i =0 ; i<n-1; i++)
        //     {
        //         nums[i+1]=nums[i];  
                
        //     } 
        //     nums[0]=temp; 
        // }   
    }
};
// @lc code=end

