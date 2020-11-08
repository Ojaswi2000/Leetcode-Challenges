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