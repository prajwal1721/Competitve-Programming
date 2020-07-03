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
    ll n,u=0,l=0,t1,t2,m,k;cin>>n>>m>>k;
    vector<pair<ll,ll>> st,ed;
    string s;
    for(int i=0;i<k;i++){cin>>t1>>t2;
        l=max(t1-1,l);
        u=max(t2-1,u);    
    }
    while(l--)s+='U';
    while(u--)s+='L';
    for(int i=0;i<k;i++){
        cin>>t1>>t2;
        ed.push_back({t1,t2});
    }
    sort(ed.begin(),ed.end());
    ll x=1,y=1;
    for(int i=0;i<k;i++)
    {
        while(ed[i].first-x>0){x++;s+='D';}
        while(ed[i].first-x<0){x--;s+='U';}
        while(ed[i].second-y>0){y++;s+='R';}
        while(ed[i].second-y<0){y--;s+='L';}
    }
    cout<<s.length()<<"\n"<<s<<"\n";

    // if(cnt>2*n*m){cout<<"-1\n";return ;}
    // cout<<cnt<<"\n"<<s<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}