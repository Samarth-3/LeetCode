/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    // v.push_back(i);
                    // v.push_back(j);
                    return {i, j};
                    break;
                }
            }
        }
       // return v;
       return{};
    }
};


//         vector<int> v;
//         for(int i=0;i<nums.size();i++){
//             for(int j=1+i;j<nums.size();j++){
//                 if (nums[i]+nums[j]==target)
//                 {
//                     v.push_back(i);
//                     v.push_back(j);
//                     break;
//                 }
//                 else if(nums[i]+nums[j]>target){
//                     break;
//                 }
//                 else{
//                     continue;
//                 }
                
//             }
//         }
//         return v;
//     }
// };
// @lc code=end

