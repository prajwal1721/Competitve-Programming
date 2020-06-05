def func():
    n=int(input())
    ans=0
    for i in range(0,62):
        if ((1<<i)&n)==(1<<i):
            ans+=((1<<(i+1))-1)
    print(ans)

no=int(input())
for i in range(0,no):
    func()
