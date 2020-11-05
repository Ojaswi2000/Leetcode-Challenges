/**
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>z;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                z.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<z.size();i++)
            nums.push_back(z[i]);
    }
        
};
