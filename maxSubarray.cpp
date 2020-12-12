/**
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [0]
Output: 0
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=nums[0],curr=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            curr=max(nums[i],curr+nums[i]);
            max_so_far=max(max_so_far,curr);
        }
        return max_so_far;
    }
};
