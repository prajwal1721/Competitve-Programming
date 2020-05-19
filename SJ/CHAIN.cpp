// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: SOME CASES MISSING  
    WA
CHECK ONCE

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
ll s[50005];
ll size[50005]={0};
ll eat[50005]={0};
int find(int n)
{
    ll t=n;
    while(s[n]!=n)
        n=s[n];
    if(eat[n]==0)eat[n]=eat[t];
    return n;
}
void unio(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)return;
    if(size[a]<size[b])
        {int t=a;a=b;b=t;}
    s[b]=a;
    eat[a]=eat[b];
    size[a]+=size[b];
}
void solve()
{
  ll n,k,t;cin>>n>>k;
//   make set 
    for(int i=1;i<=n;i++)
        {s[i]=i;size[i]=1;
        eat[i]=0;
        }

//  k queries
    ll c,a,b,ans=0;
    ll cat_a=-1,cat_b=-1,cat_c=-1;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b>>c;
        if(b>n || c>n )ans++;
        else if(a==1)
        {
            
            if((find(c)!=c && find(b)==b || find(c)==c && find(b)!=b ||find(c)==c && find(b)==b )&& (eat[find(b)]==eat[find(c)] ||eat[find(b)]!=find(c) ||eat[find(c)]==find(b)))
            {
                unio(c,b);
            }
            else ans++;
        }
        else 
        {   
            if(b==c || find(b)==find(c))ans++;
            else if (eat[find(b)]==0 )
            {
                eat[find(b)]=find(c);
            }
            else if(eat[find(b)]!=find(c) )
            {
                ans++;
            }

        }
        // cout<<i+1<<" "<<ans<<"\n";
    }
    cout<<ans<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}