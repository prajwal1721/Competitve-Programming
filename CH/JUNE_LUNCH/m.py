def f():
    (n,k)=(map(int,input().split()))
    l=[]
    l = list(map(int,input().split()))
    ans=[]
    for i in range(32):
        sum=0
        for p in l:
            sum=sum+ (1<<i and p)
        ans.append((sum,i))
    ans.sort(key = lambda x: -x[0])
    for i in ans:
        (x,y)=i
        print(x)
t=int(input())
for i in range(t):
    f()