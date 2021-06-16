class Solution {
public:
    vector<int> factorial(int n){
        vector<int>v;
        int x=0,q=2,len=1,num=0;
        int arr[100000]={0};
        arr[0]=1;
        while(q<=n)
        {
            int x=0,num=0;
            while(x<len)
            {
            arr[x]=arr[x]*q;
            arr[x]=arr[x]+num;
            num=arr[x]/10;
            arr[x]=arr[x]%10;
            x++;
            }
            while(num!=0)
            {
                arr[len]=num%10;
                num/=10;
                len++;
            }
            q++;
        }
        len--;
        while(len>=0)
        {
            v.push_back(arr[len]);
            len--;
        }
        return v;
    }
};
