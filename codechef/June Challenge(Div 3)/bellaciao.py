for _ in range(int(input())):
    D,d,p,q=map(int,input().split())
    z=D//d
    z1=z-1
    rem=D%d
    ans=d*((z*p)+(z1*(z1+1)//2)*q)
    ans+=rem*(p+(q*z))
    print(ans)
