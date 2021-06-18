class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),sum=0;
        for(int i:nums)
            sum+=i;
        if(sum<target)
            return 0;
        int minl=n+1;
        int curr;
        for(int i=0;i<n;i++)
        {
            curr=nums[i];
            if(curr>=target)
                return 1;
            for(int j=i+1;j<n;j++)
            {
                curr+=nums[j];
                if(curr>=target && (j-i+1)<minl)
                    minl=j-i+1;
            }
        }
        return minl;
    }
};
