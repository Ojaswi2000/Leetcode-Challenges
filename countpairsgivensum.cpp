class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        m[arr[i]]+=1;
        int tc=0;
        for(int i=0;i<n;i++)
        {
            tc+=m[k-arr[i]];
            if(k-arr[i]==arr[i])
            tc--;
        }
        return tc/2;
    }
};
