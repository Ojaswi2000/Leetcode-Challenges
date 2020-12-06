/**
Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of N people with ages a1,a2,…,aN.

There is only one hospital where vaccination is done and it is only possible to vaccinate up to D people per day. Anyone whose age is ≥80 or ≤9 is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and D.
The second line contains N space-separated integers a1,a2,…,aN.
Output
For each test case, print a single line containing one integer ― the smallest required number of days.

Constraints
1≤T≤10
1≤N≤104
1≤D≤105
1≤ai≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79
Example Output
10
3
*/
#include <iostream>
#include<math.h>
using namespace std;
# define lli long long int
int main() {
	lli t;
	cin>>t;
	while(t--)
	{
	lli n,d;
	cin>>n>>d;
	lli ages[n],risk=0,norisk=0;
	for(int i=0;i<n;i++)
	cin>>ages[i];
	for(int i=0;i<n;i++)
	{
	    if(ages[i]>=80 || ages[i]<=9)
	    risk++;
	    else
	    norisk++;
	}
	lli days=ceil(float(risk)/float(d))+ceil(float(norisk)/float(d));
	cout<<days<<"\n";
	}
	return 0;
}
