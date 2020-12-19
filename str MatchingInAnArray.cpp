/**
Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

 Example 1:

Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
Example 2:

Input: words = ["leetcode","et","code"]
Output: ["et","code"]
Explanation: "et", "code" are substring of "leetcode".
Example 3:

Input: words = ["blue","green","bu"]
Output: []
*/

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>v;
        set<string>s;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(i!=j && words[i].find(words[j])!=-1)
                {
                    s.insert(words[j]);
                    
                }
                    
            }
        }
        for(auto i=s.begin();i!=s.end();i++)
        v.push_back(*i);
        return v;
    }
};
