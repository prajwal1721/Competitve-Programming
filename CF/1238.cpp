#include<iostream>
using namespace std;
int  main()
{
    int q;
    cin>>q;
    while (q--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int n=a-b;
        if(n>1) printf("YES\n");
        else
        printf("NO\n");
    }
}
