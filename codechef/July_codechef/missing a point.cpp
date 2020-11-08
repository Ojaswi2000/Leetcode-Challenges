/**
Chef has N axis-parallel rectangles in a 2D Cartesian coordinate system. These rectangles may intersect, but it is guaranteed that all their 4N vertices are pairwise distinct.

Unfortunately, Chef lost one vertex, and up until now, none of his fixes have worked (although putting an image of a point on a milk carton might not have been the greatest idea after all…). Therefore, he gave you the task of finding it! You are given the remaining 4N−1 points and you should find the missing one.
Example Input
1
2
1 1
1 2
4 6
2 1
9 6
9 3
4 3
Example Output
2 2
*/
#include <iostream>
#include <set> 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr1[4*n-1],arr2[4*n-1];
	    for(int i=0;i<4*n-1;i++)
	    {
	        cin>>arr1[i];
	        cin>>arr2[i];
	    }
	    set<long long int>s1;
	    set<long long int>s2;
	    for(long long int i:arr1)
	    {
	        if(s1.find(i)==s1.end())
	        s1.insert(i);
	        else
	        s1.erase(i);
	    }
	    for(long long int i:arr2)
	    {
	        if(s2.find(i)==s2.end())
	        s2.insert(i);
	        else
	        s2.erase(i);
	    }
	    for(auto i=s1.begin();i!=s1.end();i++)
	    cout<<*i<<" ";
	    for(auto i=s2.begin();i!=s2.end();i++)
	    cout<<*i<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}
