/**
You are playing a Billiards-like game on an N×N table, which has its four corners at the points {(0,0),(0,N),(N,0), and (N,N)}. You start from a coordinate (x,y), (0<x<N,0<y<N) and shoot the ball at an angle 45∘ with the horizontal. On hitting the sides, the ball continues to move with the same velocity and ensuring that the angle of incidence is equal to the angle of reflection with the normal, i.e, it is reflected with zero frictional loss. On hitting either of the four corners, the ball stops there and doesn’t move any further.

Find the coordinates of the point of collision, when the ball hits the sides for the Kth time. If the ball stops before hitting the sides K times, find the coordinates of the corner point where the ball stopped instead.

Input:
The first line of the input contains an integer T, the number of testcases.
Each testcase contains a single line of input, which has four space separated integers - N, K, x, y, denoting the size of the board, the number of collisions to report the answer for, and the starting coordinates.
Output:
For each testcase, print the coordinates of the ball when it hits the sides for the Kth time, or the coordinates of the corner point if it stopped earlier.

Constraints
1≤T≤105
2≤N≤109
1≤K≤109
Subtasks
30 points : Sum of K over all test cases ≤107
70 points : Original constraints.
Sample Input:
2
5 5 4 4
5 2 3 1
Sample Output:
5 5
3 5
*/
t=int(input())
for i in range(t):
    n,k,x,y=map(int,input().split())
    if(x==y):
        print(n,end=" ")
        print(n)
    else:
        final=[]
        if x<y:
            final=[[x+n-y,n],[n,n-y+x],[y-x,0],[0,y-x]]
        else:
            final=[[n,y+n-x],[y+n-x,n],[0,x-y],[x-y,0]]
        result=final[(k-1)%4]
        print(result[0],result[1])
