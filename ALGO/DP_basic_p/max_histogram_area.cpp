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
    ll n,t;cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    stack<ll> st;
    ll c=0,area=0,mx=0;
    for(int i=1;i<=n;)
    {
        if(st.empty() || v[st.top()-1]<=v[i-1])
            st.push(i++);
        else 
        {
            if(st.size()==1)
            {
                area=v[st.top()-1]*(i-1);
                st.pop();
            }
            else
            {
                area=v[st.top()-1]*(i-st.top()+1);
                st.pop();
            }
            mx=max(mx,area);
        }
    // cout<<st.size()<<" ";/

    }
    // cout<<mx<<" ";       
    while(!st.empty())
    {
               if(st.size()==1)
            {
                area=v[st.top()-1]*n;
                st.pop();
            }
            else
            {
                area=v[st.top()-1]*(n-st.top()+1);
                st.pop();
            }
            mx=max(mx,area);
    }
    cout<<mx<<"\n";

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