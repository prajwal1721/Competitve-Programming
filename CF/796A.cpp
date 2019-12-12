#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,target,p,k,dist=0;
    cin>>n>>target>>k;
    dist=(n-1)*10;
    for(ll i=0;i<target-1 && i<n;i++ )
    {
        cin>>p;
        if(k>=p && (target-1-i)*10<=dist && p!=0 ) 
            dist=(target-1-i)*10;
    }
    cin>>p;
    ll i;
    for( i=target; i<n;i++ )
    {
        cin>>p;
        if(k>=p && (i-target+1)*10<=dist && p!=0) 
            {dist=(i-target+1)*10;break;}
    }
    for(;i<n-1;i++) cin>>p;
    cout<<dist<<'\n';
}