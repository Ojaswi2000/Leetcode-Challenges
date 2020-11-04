/**
Given a sentence that consists of some words separated by a single space, and a searchWord.
You have to check if searchWord is a prefix of any word in sentence.
Return the index of the word in sentence where searchWord is a prefix of this word (1-indexed).
If searchWord is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return -1.
A prefix of a string S is any leading contiguous substring of S.

Example 1:

Input: sentence = "i love eating burger", searchWord = "burg"
Output: 4
Explanation: "burg" is prefix of "burger" which is the 4th word in the sentence.

Example 2:

Input: sentence = "this problem is an easy problem", searchWord = "pro"
Output: 2
Explanation: "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
*/
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string>v;
        string t="";
        sentence+=" ";
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]==' ')
            {
                v.push_back(t);
                t="";
            }
            else
                t+=sentence[i];
        }
        int flag=0;
        int i;
        int len=searchWord.length();
        for(i=0;i<v.size();i++)
        {
            if(v[i].substr(0,len)==searchWord)
            {
                flag=1;
                
                break;
            }
        }
        if(flag==0)
            return -1;
        else
            return i+1;
        
    }
};
