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
    ll n,t,cnt=0,st=0,f=0,f2=0;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);
        if(1+i!=t){if(st==0)st=i+1;f2=1;}
        else{cnt++;f=1;}
    }
    if(cnt==n)cout<<"0\n";
    else if(!f && f2 )cout<<"1\n";
    else
    {
        ll c=1;
        for(int i=st-1;i<n;i++)
        {
            // cout<<v[i]<<" "<<i+1<<"\n";
            if(i+1!=v[i] && c){
                while(i<n && v[i]!=i+1){i++;}
                if(i==n){cout<<"1\n";return ;}
                c=0;
            }
            else if(i+1!=v[i]){cout<<"2\n";return;}
        }
        // if(c==0){cout<<"1\n";return ;}
        cout<<"1\n";
    }
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