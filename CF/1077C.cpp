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


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;




// struct HASH{
//		size_t operator()(const pair<int,int>&x)const{
//			return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

void solve()
{
    ll sum=0,n,t,i=0,cn; cin>>n;cn=n;
    map<ll,vector<ll>> mp;
    set<ll> st;
    while ( n--)
    {
        cin>>t;
        st.insert(t);
        mp[t].push_back(i+1);
        sum+=t;i++;
    }
    vector<ll> ans;ll a=0;i=0;
    for(auto it=st.begin();it!=st.end();it++)
    {
        // cout<<(sum-*it)/2.0<<"== "<<*st.find(sum-*it)<<"\n";
        if((sum-*it)%2==0 && st.find((sum-*it)/2)!=st.end()){a+=mp[*it].size();
        if(*it==(sum-*it)/2 && mp[(*it)].size()==1){a--;break;}
        // cout<<*it<<"\n";
        for(auto p=mp[(*it)].begin();p!=mp[(*it)].end();p++)
            ans.push_back(*p);
        }
    }
    cout<<a<<"\n";
    for(auto it=ans.begin();it!=ans.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";

            solve();


    return 0;
}