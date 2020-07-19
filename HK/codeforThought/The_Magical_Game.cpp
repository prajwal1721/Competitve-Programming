// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:AC
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
map<ll,vector<ll>>data;
void solve()
{
    ll n,t;cin>>n;
    map<ll,ll>sz;
    vector<ll>v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);sz[t]=0;}
    for(int i=0;i<n;i++){cin>>t;
        data[v[i]].push_back(t);
        sz[v[i]]++;
    }

    priority_queue<ll> pq;
    ll ans=0,sz_pq=0,c_sum=0,pre=0;
    for(auto l:data )
    {
        t=l.first-pre-1;
        while (t && pq.size()!=0)
        {
            t--;
            c_sum-=pq.top();
            ans+=c_sum;
            pq.pop();
        }
        if(sz_pq==0 && sz[l.first]==1){
            pre=l.first;
            continue;
        }
        for(auto it:l.second)
        {
            pq.push(it);
            c_sum+=it;
        }
        int p=sz[l.first],d;d=(p==1);
        for(int i=0;i<(p+d!=1) && pq.size()!=0;i++)
        {
            c_sum-=pq.top();
                pq.pop();
                sz_pq--;
                p--;
        }
       
        pre=l.first;
        ans+=c_sum;
    }
     while(!pq.empty())
        {
            c_sum-=pq.top();
            pq.pop();
            ans+=c_sum;
        }
    cout<<ans<<"\n";
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