class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals=sorted(intervals)
        i=0
        while i<len(intervals)-1:
            curr=intervals[i]
            next=intervals[i+1]
            if curr[1]>=next[0]:
                if curr[1]<=next[1]:
                    curr[1]=next[1]
                intervals.pop(i+1);
            else:
                i+=1
        return intervals
        
