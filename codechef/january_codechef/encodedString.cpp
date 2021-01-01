/**
An encoder encodes the first 16 lowercase English letters using 4 bits each. The first bit (from the left) of the code is 0 if the letter lies among the first 8 letters, else it is 1, signifying that it lies among the last 8 letters. The second bit of the code is 0 if the letter lies among the first 4 letters of those 8 letters found in the previous step, else it's 1, signifying that it lies among the last 4 letters of those 8 letters. Similarly, the third and the fourth bit each signify the half in which the letter lies.

For example, the letter j would be encoded as :

Among (a,b,c,d,e,f,g,h | i,j,k,l,m,n,o,p), j appears in the second half. So the first bit of its encoding is 1.
Now, among (i,j,k,l | m,n,o,p), j appears in the first half. So the second bit of its encoding is 0.
Now, among (i,j | k,l), j appears in the first half. So the third bit of its encoding is 0.
Now, among (i | j), j appears in the second half. So the fourth and last bit of its encoding is 1.
So j's encoding is 1001,

Given a binary encoded string S, of length at most 105, decode the string. That is, the first 4 bits are the encoding of the first letter of the secret message, the next 4 bits encode the second letter, and so on. It is guaranteed that the string's length is a multiple of 4.

Input:
The first line of the input contains an integer T, denoting the number of test cases.
The first line of each test case contains an integer N, the length of the encoded string.
The second line of each test case contains the encoded string S.
Output:
For each test case, print the decoded string, in a separate line.

Constraints
1≤T≤10
4≤N≤105
The length of the encoded string is a multiple of 4.
0≤Si≤1
Subtasks
100 points : Original constraints.
Sample Input:
3
4
0000
8
00001111
4
1001
Sample Output:
a
ap
j
*/
#include <iostream>
#include<string>
using namespace std;
# define lli long long int 
lli dec(lli n)
{
    int dec_value = 0;
    int base = 1;
    int temp = n;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int main() {
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n;
	    cin>>n;
	    string s;
	    cin>>s;
	    char array[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
	        'o','p'};
	    
	    string final="";
	    for(int i=0;i<s.size();i+=4)
	    {
	        lli a=stoi(s.substr(i,4));
	        lli decimal=dec(a);
	        final+=array[decimal];
	    }
	    cout<<final<<"\n";
	}
	return 0;
}
