/**
Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int>m;
        for(int i:nums)
            m[i]++;
        for(auto i:m)
            pq.push({i.second,i.first});
        vector<int>f;
        while(k--)
        {
            f.push_back(pq.top().second);
            pq.pop();
        }
        return f;
        
    }
};
