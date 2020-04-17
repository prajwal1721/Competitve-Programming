#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;cin>>n>>k;
    int odd=0;
    int count[n+1]={0};
    int u,v,M;
    while (k--)
    {
        cin>>u>>v>>M;
        count[v]+=M;
        count[u]+=M;
    }
    int ans=1,f=0;
    for(int i=1;i<=n;i++){
        if(count[i]&1){odd++;
            if(!f){ans=i;f=1;}
        }
    }
    if(odd<=2)cout<<"YES "<<ans<<"\n";
    else 
    cout<<"NO\n";
}
int main()
{
    int t;cin>>t;
    while (t--)
        sol();
}