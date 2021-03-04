#include<bits/stdc++.h>
#include <iostream>
#include<string.h>
using namespace std;
int fun(string s,string id)
{
    if(s.substr(0,2)=="12" && id.substr(0)=="AM")
    return stoi(s.substr(3,5));
    else if(s.substr(0,2)!="12" && id.substr(0)=="AM")
    return (stoi(s.substr(0,2))*100+stoi(s.substr(3,5)));
    else if(s.substr(0,2)=="12" && id.substr(0)=="PM")
    return 1200+stoi(s.substr(3,5));
    else if(s.substr(0,2)!="12" && id.substr(0)=="PM")
    return (((stoi(s.substr(0,2))+12)*100)+stoi(s.substr(3,5)));
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    string p,id;
	    cin>>p;
	    cin>>id;
	    long long int n;
	    cin>>n;
	    string l,r,id1,id2;
	    string st="";
	    for(int i=0;i<n;i++)
	    {
	        cin>>l;
	        cin>>id1;
	        cin>>r;
	        cin>>id2;
	        if(fun(p,id)>=fun(l,id1) && fun(p,id)<=fun(r,id2))
	        st+='1';
	        else
	        st+='0';
	    }
	    cout<<st<<"\n";
	    
	    
	}
	return 0;
}
