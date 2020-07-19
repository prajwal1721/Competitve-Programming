// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,t,m;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    for(int i=0;i<n;i++)
    {
        t=v[i];

        ll score=0,d0=t%10,d1=t/10%10,d2=t/100;
    // max
        if(d0>=d1 && d0>=d2)score+=d0*11;
        else if(d1>=d2 && d1>=d0)score+=d1*11;
        else if(d2>=d1 && d2>=d0)score+=d2*11;
    // min
        if(d0<=d1 && d0<=d2)score+=d0*7;
        else if(d1<=d2 && d1<=d0)score+=d1*7;
        else if(d2<=d1 && d2<=d0)score+=d2*7;
        v[i]=score%100;
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<"\n";
    ll odd[100]={0},eve[100]={0};
    for(int i=0;i<n;i++){
        if(i%2)eve[v[i]]++;
        else odd[v[i]]++;
    }
    ll ans=0;
    for(int i=0;i<100;i++)
    {
        if(odd[i] && eve[i])
        {
            t=min(odd[i],eve[i]);
            odd[i]-=t;
            eve[i]-=t;
            ans+=t;
        }
    }
    for(int i=0;i<10;i++)
    {
        ll cnt1=0 ;
        for(int j=0;j<10;j++)
        {
            cnt+=odd[]
        }
    }


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