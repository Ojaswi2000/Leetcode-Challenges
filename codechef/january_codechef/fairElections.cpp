/**
Elections are coming soon. This year, two candidates passed to the final stage. One candidate is John Jackson and his opponent is Jack Johnson.

During the elections, everyone can vote for their favourite candidate, but no one can vote for both candidates. Then, packs of votes which went to the same candidate are formed. You know that for John Jackson, there are N packs containing A1,A2,…,AN votes, and for Jack Johnson, there are M packs containing B1,B2,…,BM votes.

The winner is the candidate that has strictly more votes than the other candidate; if both have the same number of votes, there is no winner. You are a friend of John Jackson and you want to help him win. To do that, you may perform the following operation any number of times (including zero): choose two packs of votes that currently belong to different candidates and swap them, i.e. change the votes in each of these packs so that they would go to the other candidate.

You are very careful, so you want to perform as few swaps as possible. Find the smallest number of operations you need to perform or determine that it is impossible to make John Jackson win.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and M.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains M space-separated integers B1,B2,…,BM.
Output
For each test case, print a single line containing one integer ― the smallest number of swaps needed to make John Jackson win, or −1 if it is impossible.

Constraints
1≤T≤103
1≤N,M≤103
1≤Ai≤106 for each valid i
1≤Bi≤106 for each valid i
the sum of N over all test cases does not exceed 104
the sum of M over all test cases does not exceed 104
Subtasks
Subtask #1 (20 points):

A1=A2=…=AN
B1=B2=…=BM
Subtask #2 (80 points): original constraints

Example Input
2
2 3
2 2
5 5 5
4 3
1 3 2 4
6 7 8
Example Output
2
1
*/
#include <iostream>
#include <algorithm>
#include <numeric>
#include<vector>
#include<bits/stdc++.h>
#include<iterator>
#include <queue>
using namespace std;
#define lli long long int
int main() {
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n,m;
	    cin>>n>>m;
	    priority_queue<lli,vector<lli>,greater<int>>arr1;
	    priority_queue<lli>arr2;
	    lli sum1=0,sum2=0;
	    for(int i=0;i<n;i++)
	    {
	        lli x;
	        cin>>x;
	        arr1.push(x);
	        sum1+=x;
	    }
	    for(int i=0;i<m;i++)
	    {
	        lli y;
	        cin>>y;
	        arr2.push(y);
	        sum2+=y;
	    }
	    
	    int flag=0;
	    if(sum1>sum2)
	    {
	        flag=1;
	        cout<<0<<"\n";
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	            lli x=arr1.top();
	            lli y=arr2.top();
	            sum1+=y-x;
	            sum2+=x-y;
	            arr1.pop();
	            arr2.pop();
	            if(sum1>sum2)
	            {
	                flag=1;
	                cout<<i+1<<"\n";
	                break;
	            }
	        }
	        if(flag==0)
	        cout<<-1<<"\n";
	        
	    }
	}
	return 0;
}
