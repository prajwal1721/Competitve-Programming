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
    ll visited[1000003]={0};
set<ll >r ;
void reset()
{
    for(auto l:r)
    {
        visited[l]=0;
    }
    r.clear();
}
void solve()
{
    ll n,t;cin>>n;
    vector<ll >ans;
    ll process=0,sz=0;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;
        sz++;
        if(t>0 && visited[t]==0){process++;visited[t]=1;r.insert(t);}
        else if(t>0 && visited[t]!=0){if(process==0){ans.push_back(sz-1);sz=1;reset();visited[t]=1;r.insert(t);process++;}
        else
            {cout<<"-1\n";return ;}
        }
        else if(t<0 && visited[abs(t)]==1){process--;visited[abs(t)]=-1;}
        else {cout<<"-1\n";return ;}
        if(i==n-1 && process==0){ans.push_back(sz);process=-1;}
        else if(i==n-1) {cout<<"-1\n";return ;}
        if(process==0){ans.push_back(sz);reset();sz=0;}
    }
    if(n%2){cout<<"-1\n";return;}
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<"\n";
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