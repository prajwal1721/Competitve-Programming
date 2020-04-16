// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
    ll a[2001][2001]={0};
void solve()
{
   ll n,m;  cin>>n>>m;
   ll w[26];
   for(ll i=0;i<26;i++)
    cin>>w[i];
    string s1,s2;cin>>s1>>s2;
    a[0][0]=0;
    for(ll i=1;i<=n;i++)a[i][0]=0;
    for(ll i=1;i<=m;i++)a[0][i]=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])a[i][j]=a[i-1][j-1]+w[s1[i-1]-'a'];
            else
            a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }   /*      
    cout<<"    ";  
    for(ll j=1;j<=m;j++)
        cout<<s2[j-1]<<" ";
    cout<<"\n";
    for(ll i=0;i<=n;i++)
    {
        if(i>=1)
        cout<<s1[i-1]<<" ";
        else cout<<"  ";
        for(ll j=0;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<"\n";
    }          */                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    cout<<a[n][m]<<"\n";
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}