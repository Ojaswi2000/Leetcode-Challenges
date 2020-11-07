/**
Given two words word1 and word2, find the minimum number of steps required to make word1 and word2 the same, where in each step you can delete one character in either string.

Example 1:
Input: "sea", "eat"
Output: 2
Explanation: You need one step to make "sea" to "ea" and another step to make "eat" to "ea".
*/
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0)
                    dp[i][j]=j;
                if(j==0)
                    dp[i][j]=i;
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
        
    }
};
