class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rb=0,re=matrix.size()-1;
        int cb=0,ce=matrix[0].size()-1;
        vector<int>v;
        while(rb<=re && cb<=ce)
        {
            for(int i=cb;i<=ce;i++)
                v.push_back(matrix[rb][i]);
            rb++;
            for(int i=rb;i<=re;i++)
                v.push_back(matrix[i][ce]);
            ce--;
            if(rb<=re)
            {
                for(int i=ce;i>=cb;i--)
                    v.push_back(matrix[re][i]);
                re--;
            }
            if(cb<=ce)
            {
                for(int i=re;i>=rb;i--)
                    v.push_back(matrix[i][cb]);
                cb++;
                    
            }
        }
        return v;
    }
};
