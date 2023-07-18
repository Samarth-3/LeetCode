/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v; // Create an empty vector to store the duplicate numbers
        sort(nums.begin(), nums.end()); // Sort the input vector in ascending order
        for(int i = 0; i < nums.size() - 1; i++) { // Iterate over the vector
            if(nums[i] == nums[i+1]) { // Check if the current number is equal to the next number
                v.push_back(nums[i]); // If it is, add the current number to the result vector
            } 
        }
        return v; // Return the vector containing the duplicate numbers
    }
};

// @lc code=end

