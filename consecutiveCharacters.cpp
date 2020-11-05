/**
Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.Return the power of the string.

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.
Example 2:

Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
Example 3:

Input: s = "triplepillooooow"
Output: 5
Example 4:

Input: s = "hooraaaaaaaaaaay"
Output: 11
Example 5:

Input: s = "tourist"
Output: 1
*/
class Solution {
public:
    int maxPower(string s) {
        int curr=0,maxl=0;
        if(s.size()==1)
            return 1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1])
                curr++;
            else
                curr=0;
            maxl=max(maxl,curr);
        }
        return maxl+1;
    }
};

