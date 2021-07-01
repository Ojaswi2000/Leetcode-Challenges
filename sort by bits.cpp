int countbits(int n)
    {
        int c=0;
        while(n)
        {
            if(n&1)
                c++;
            n>>=1;
        }
        return c;
    }
     bool comp(int a,int b)
    {
        int c1=countbits(a);
        int c2=countbits(b);
        if(c1<c2)
            return true;
        if(c1==c2)
            return a<b;
        return false;
    }
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
        
    }
};
    
    
   
    
