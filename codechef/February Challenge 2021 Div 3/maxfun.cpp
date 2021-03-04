#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define lli long long int
int main() {
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n;
	    cin>>n;
	    lli arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    lli max=0,min=0;
	    max=*max_element(arr,arr+n);
	    min=*min_element(arr,arr+n);
	    cout<<2*(max-min)<<"\n";
	 }
	return 0;
}
