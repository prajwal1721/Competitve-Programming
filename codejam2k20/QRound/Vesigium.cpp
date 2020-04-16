// link:codejam 2020
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow Vestigium.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef int ll;



void solve()
{
    ll n;cin>>n;
    ll tr=0,cnt_row=0,cnt_col=0;
    ll a[105][105]={0};
    ll c[104]={0};
    for(ll i=0;i<n;i++)
    {
        
        for(ll ii=0;ii<=101;ii++)
            c[ii]=0;
        ll f=1;
        for(ll j=0;j<n;j++)
        {
            cin>>a[i][j];
            if( f && c[a[i][j]]==1){cnt_row++;f=0;}
            if(i==j)tr+=a[i][i];
            c[a[i][j]]=1;
        }
    }

    for(ll i=0;i<n;i++)
    {
        for(ll ii=0;ii<=101;ii++)
            c[ii]=0;
        ll f=1;
        for(ll j=0;j<n;j++)
        {
            // cin>>a[i][j];
            if( f && c[a[j][i]]==1){cnt_col++;f=0;}
            c[a[j][i]]=1;
        }
    }
    cout<<tr<<" "<<cnt_row<<" "<<cnt_col<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(i<=t)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
        }


    return 0;
}