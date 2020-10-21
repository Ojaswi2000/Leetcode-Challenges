/** Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.
A substring is a contiguous sequence of characters within a string.
Example 1:
Input: s = "aa"
Output: 0
Explanation: The optimal substring here is an empty substring between the two 'a's.  */

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<int,int>m;
        int l=s.length(),flag=0;
        for(int i=0;i<l;i++)
        {
            char ch=s[i];
            if(!m.count(s[i]))
            {
                m[ch]=i;
            }
            flag=max(flag,i-m[ch]);
        }
        if(flag-1>=0)
            return flag-1;
        else
            return -1;
            
    }
};
