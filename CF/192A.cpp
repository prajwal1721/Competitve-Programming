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
typedef  int ll;
void solve()
{
    ll n;
    cin>>n;
    vector< ll > v;
    ll sum = 0;
    for(int i=1;i<=2*sqrt(n);i++)
    {
        sum+=i;
        v.push_back(sum); 
    }
    for(int i=0;i<v.size();i++)
    {
        //cout<<i<<endl;
        if(v[i]>n) break;
        for(int j=i;j<v.size();j++)
        {
            if(v[j]>n) break;
            if (v[i]+v[j] == n)
            {
                cout<<"YES"<<endl;
                return ;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
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