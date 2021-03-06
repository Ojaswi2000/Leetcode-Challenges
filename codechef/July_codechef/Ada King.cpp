/**
Chef Ada is training her calculation skills. She wants to place a king and some obstacles on a chessboard in such a way that the number of distinct cells the king can reach is exactly K.

Recall that a chessboard has 8 rows (numbered 1 through 8) and 8 columns (numbered 1 through 8); let's denote a cell in row r and column c by (r,c).

In one move, a king can move to any adjacent cell which shares a side or corner with its current cell and does not contain an obstacle. More formally, a king in a cell (r,c) can move to any cell (rn,cn) if (rn,cn) is a valid cell of the chessboard which does not contain an obstacle and (r−rn)2+(c−cn)2≤2.

A cell (x,y) can be reached by a king if, after an arbitrary number of moves (including zero), the king is in the cell (x,y).

Help Ada find any valid configuration of the board such that the king can reach exactly K distinct cells. It is guaranteed that such a configuration always exists. If there are multiple solutions, you may find any one.
Example Input
4
1
5
9
64
Example Output
........
........
........
.XXX....
.XOX....
.XXX....
........
........

........
........
........
........
........
XXX.....
..XX....
O..X....

........
.XXXXXXX
.X.O...X
.X...XXX
.XXX.X..
...XXX..
........
........

........
........
........
...O....
........
........
........
........
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int k;
	    cin>>k;
	    long long int c=0;
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            if(i==0 && j==0)
	            cout<<"O";
	            else if(c<k-1)
	            {
	                cout<<".";
	                c+=1;
	            }
	            else
	            cout<<"X";
	            
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
