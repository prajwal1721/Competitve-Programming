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
    ll n,k;cin>>n>>k;
    // cout<<bits(n)<<"\n"; 
    /*
    if(bits(n)==k)
    {
        cout<<"YES\n";
        ll no=ceil(log2(n));
        for(ll i=no;i>=0;i--)
        {
            // cout<<(n&(1<<i))<<n<<<<"\n";
            if((n&(1<<i)) == (1<<i))
                cout<<(1<<i)<<" ";
        }
        cout<<"\n";
        return ;
    }    */
    if(bits(n)>k){cout<<"NO\n";return ;}
    
    // cout<<"Progress\n";
    vector<ll>s1,s2;
    ll no=ceil(log2(n));
    for(ll i=no;i>=0;i--)
    {
         if((n&(1<<i)) == (1<<i))s1.push_back((1<<i));
    }
    ll cur=bits(n),cnt_1=0;

while(cur!=k && !cnt_1)
{
    s2.clear();
    cnt_1=0;
    for(ll i=0;i<s1.size() && cur<=k;i++)
    {
        if(cur==k)s2.push_back(s1[i]);
        else if(s1[i]!=1)
        {
            s2.push_back(s1[i]/2);
            s2.push_back(s1[i]/2);
            cur+=1;
        }
        else
            s2.push_back(s1[i]);
    }
s1.clear();
// for(int i=0;i<s2.size();i++){s1.push_back(s2[i]);}
    swap(s1,s2);
    if(cur==k)break;
    cnt_1=1;
    for(int i=0;i<s1.size();i++)
    {
        // cout<<s1[i]<<" ";
        if(s1[i]!=1){cnt_1=0;break;}
    }
    // cout<<cnt_1<<"\n";
}
    if(cnt_1==1)cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0;i<s1.size();i++)
            cout<<s1[i]<<" ";cout<<"\n";
    }

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