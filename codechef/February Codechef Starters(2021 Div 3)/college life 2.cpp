/**
Chef has just started watching Game of Thrones, and he wants to first calculate the exact time (in minutes) that it'll take him to complete the series.

The series has S seasons, and the ith season has Ei episodes, each of which are Li,1,Li,2,…,Li,Ei minutes long. Note that these Li,j include the duration of the beginning intro song in each episode. The streaming service that he uses, allows Chef to skip the intro song. The intro song changes slightly each season, and so he wants to watch the intro song in the first episode of each season, but he'll skip it in all other episodes of that season (yes, we know, a sacrilege!). You know that the intro song lasts for Qi minutes in the ith season.

Find the total time in minutes, that he has to watch.

Input:
First line will contain a single integer, T, denoting the number of testcases. Then the testcases follow.
The first line of each testcase will contain a single integer S, denoting the total number of seasons.
The second line contains S space separated integers, Q1,Q2,…,QS, where Qi denotes the duration of the intro song in the ith season.
The ith of the next S lines contains Ei+1 space separated integers, where the first integer is Ei, denoting the number of episodes in the ith season. That is followed by the duration of each of the Ei episodes, Li,1,Li,2,…,Li,Ei.
Output:
For each testcase, output the answer in a single line.

Constraints
1≤T≤5
1≤S≤105
2≤Li,j≤105
1≤Ei
Sum of all Ei in a single testcase is at most 105
1≤Qi<Li,j, for all valid j.
Sample Input 1:
1
2
1 2
1 2
2 3 4
Sample Output 1:
7
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int s;
        cin>>s;
        long long int q[s];
        int j=0;
        for(int i=0;i<s;i++)
        cin>>q[i];
        long long int sum=0;
        for(int i=0;i<s;i++)
        {
            long long int n;
            cin>>n;
            long long int d[n];
            for(int i=0;i<n;i++)
            cin>>d[i];
            if(n==1)
            {
            sum+=d[0];
            j++;
            }
            else
            {
                sum+=d[0];
                for(int i=1;i<n;i++)
                {
                    sum=(sum+d[i])-q[j];
                }
                j++;
            }
            
        }
        cout<<sum<<"\n";
        
    }
	return 0;
}
