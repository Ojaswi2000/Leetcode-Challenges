class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        for(int i=1;i<prices.size();i++)
        {
            int s=prices[i]-prices[i-1];
            if(s>0)
                p+=s;
        }
        return p;
        
    }
};
