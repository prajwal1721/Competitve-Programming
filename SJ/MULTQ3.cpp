//TLE use segmenet trees


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll n,k;cin>>n>>k;
    int data[n+2]={0};
    ll q,a,b;
    while (k--)
    {
        cin>>q>>a>>b;
        if(!q)
        {data[a]++;
        data[b+1]--;
        }
        else
        {
        ll cnt=0;
        ll cur=0;
        for(int i=0;i<n;i++)
        {
            cur=cur+data[i]; 
            if(i>=a && i<=b && cur%3==0)cnt++;
        }
                cout<<cnt<<"\n";
        }
    }
}