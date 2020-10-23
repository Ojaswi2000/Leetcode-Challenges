//Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>s1;
        int i=0,j=0,maxs=0;
        while(j<s.length())
        {
            if(s1.count(s[j])==0)
            {
                s1.insert(s[j]);
                j++;
                if(s1.size()>maxs)
                    maxs=s1.size();
            }
            else
            {
                s1.erase(s[i]);
                i++;
            }
        }
        return maxs;
    }
};
