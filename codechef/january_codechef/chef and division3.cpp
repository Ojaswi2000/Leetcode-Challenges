#include <iostream>
using namespace std;
#define lli long long int
int main() {
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n,k,d;
	    cin>>n>>k>>d;
	    lli arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    lli sum=0;
	    for(long long int i:arr)
	    sum+=i;
	    lli contests=sum/k;
	    if(contests==0)
	    cout<<contests<<"\n";
	    else if(contests<=d)
	    cout<<contests<<"\n";
	    else if(contests>d)
	    cout<<d<<"\n";
	    
	}
	return 0;
}
