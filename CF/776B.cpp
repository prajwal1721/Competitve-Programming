#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int n,ans=0;cin>>n;
    int a[n+2];
    for(int i=0;i<n+2;i++)a[i]=1;
    bool prime[n+5];
    memset(prime,true,sizeof(prime));
    { 
    for (int p=2; p*p<n+2; p++) 
        if (prime[p] == true) 
            for (int i=p*p; i<=n+1; i += p) 
                    prime[i] = false; 
    } 
    if (n>2)cout<<2<<"\n";
    else cout<<1<<"\n";
    for (int p=2; p<n+2; p++) 
    {
        if(!prime[p])
            cout<<2<<" ";
        else 
            cout<<1<<" ";
    }
}