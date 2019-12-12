#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        a[i]=0;
    if(n==1)cout<<"YES\n";
    else 
    {
        ll p=0,count=0;

        for(ll i=0;a[i]<=0;)
        {
            if(!a[i]){
                a[i]++;
                count++;
            }
            i=i+++p;
            if(i>=n) i=i%n;
            // cout<<i<<' ';
        }   
        if(count==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}