/**
Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef is playing a guitar with 106 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.
This is how guitar strings are numbered (In ascending order from right to left). Eg. to switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).
Sample Input:
2
6
1 6 11 6 10 11
4
1 3 5 7
Sample Output:
15
3
Explanation:
Test Case 1

Chef skips 4 strings (2,3,4,5) to move from 1 to 6
Chef skips 4 strings (7,8,9,10) to move from 6 to 11
Chef skips 4 strings (10,9,8,7) to move from 11 to 6
Chef skips 3 strings (7,8,9) to move from 6 to 10
Chef skips 0 strings to move from 10 to 11
Therefore, the answer is 4+4+4+3+0=15
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,c=0;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i+1]>arr[i])
	        c+=arr[i+1]-arr[i]-1;
	        else if(arr[i+1]<arr[i])
	        c+=arr[i]-arr[i+1]-1;
	        else
	        c+=0;
	
	    }
	    cout<<c<<endl;
	}
	return 0;
}
