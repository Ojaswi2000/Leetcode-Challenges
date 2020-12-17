/**
You are given two positive integers N and K, where K≤N. Find a sequence A1,A2,…,AN such that:

for each valid i, Ai is either i or −i
there are exactly K values of i such that 1≤i≤N and A1+A2+…+Ai>0
If there are multiple solutions, you may print any one of them. It can be proved that at least one solution always exists.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and K.
Output
For each test case, print a single line containing N space-separated integers A1,A2,…,AN.

Constraints
1≤T≤1,000
1≤K≤N≤1,000
Subtasks
Subtask #1 (10 points): N≤10
Subtask #2 (90 points): original constraints

Example Input
1
3 3
Example Output
1 2 3
*/
#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    vector<long long int>v;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2!=0)
	        v.push_back(-(i+1));
	        else
	        v.push_back(i+1);
	    }
	    long long int positives=ceil((double)n/2);
	    long long need;
	    if(k>positives)
	    {
	        need=k-positives;
	        int i=n-1;
	        while(need>0)
	        {
	            if(v[i]<0)
	            {
	                v[i]*=-1;
	                need--;
	            }
	            i-=1;
	        }
	   }
	    if(k<positives)
	    {
	        need=positives-k;
	        int i=n-1;
	        while(need>0)
	        {
	            if(v[i]>0)
	            {
	                v[i]*=-1;
	                need--;
	            }
	            i-=1;
	        }
	    }
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	    
	}
	return 0;
}
