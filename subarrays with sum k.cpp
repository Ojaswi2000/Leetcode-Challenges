class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0,ans=0;
        unordered_map<int,int>m;
        m[sum]++;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
                ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};


// 0 sum
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<int,int>m;
        int ans=0,sum=0;
        m[sum]++;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)!=m.end())
            ans+=m[sum];
            m[sum]++;
        }
        return ans;
    }
};
