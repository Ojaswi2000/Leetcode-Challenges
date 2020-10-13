/**
Problem Name: Buddy Strings
Given two strings A and B of lowercase letters, return true if you can swap two letters in A so the result is equal to B, otherwise, return false.
Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at A[i] and A[j]. For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
*/
class Solution {
public:
    bool buddyStrings(string A, string B) {
        int n=0;
        bool res=false;
        vector<char>v1(2);
        vector<char>v2(2);
        if(A.length()!=B.length())
            return false;
        else if(A==B)
        {
            if(unordered_set(A.begin(),A.end()).size()!=A.length())
                return true;
        }
        else
        {
            for(int i=0;i<A.size();i++)
            {
                if(A[i]!=B[i])
                {
                    n+=1;
                    v1.push_back(A[i]);
                    v2.push_back(B[i]);
                }
            }
            if(n<=2 && unordered_set(v1.begin(),v1.end())==unordered_set(v2.begin(),v2.end()))
                res=true;
        }
        return res;
    }
};
