/**
Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.
The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.
Sample Input:
2
3
10 4
8 12
7 6
2
5 10
3 4
Sample Output:
0 2
2 1
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum,r,r1,sum1;
        cin>>n;
        long long int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            cin>>arr2[i];
        }
        std::vector<int>v1,v2 ;
        for(int i=0;i<n;i++)
        {
            r=0;
            sum=0;
            while(arr1[i]!=0)
            {
                r=arr1[i] % 10;
                sum+=r;
                arr1[i]/=10;
            }
            v1.push_back(sum);
        }
        for(int i=0;i<n;i++)
        {
            r1=0;
            sum1=0;
            while(arr2[i]!=0)
            {
                r1=arr2[i]%10;
                sum1+=r1;
                arr2[i]/=10;
            }
            v2.push_back(sum1);
        }
        long long int pc=0,pm=0;
        for(int i=0;i<n;i++)
        {
            if(v1[i] > v2[i])
            pc++;
            else if(v1[i] < v2[i])
            pm++;
            else if(v1[i] == v2[i])
            {
                pc++;
                pm++;
            }
        }
        if(pc>pm)
        cout<<0<<" "<<pc;
        else if(pc<pm)
        cout<<1<<" "<<pm;
        else if(pc==pm)
        cout<<2<<" "<<pc;
        cout<<endl;
    }
	return 0;
}
       
