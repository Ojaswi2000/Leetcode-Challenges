class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=0,c=0;
        set<int>s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        for(int i=0;i<nums.size();i++)
        {
            if(!s.count(nums[i]-1))
            {
                int j=nums[i];
                c=0;
                while(s.count(j))
                {
                    c++;
                    j++;
                }
            }
            if(c>max)
                max=c;
        }
        return max;
        
    }
};
