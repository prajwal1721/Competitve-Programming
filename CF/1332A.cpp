// link:https://codeforces.com/contest/1332/problem/A
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow 1132A.cpp




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
    ll a[4];cin>>a[0]>>a[1]>>a[2]>>a[3];
    ll f=1,x,y,x1,x2,y1,y2,l=0,r=0,d=0,u=0;cin>>x>>y>>x1>>y1>>x2>>y2;
    x=x-a[0]+a[1];y=y-a[2]+a[3];
    if(x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a[0]+a[1]==0)&&(y2>y1||a[2]+a[3]==0))cout<<"Yes\n";
    else cout<<"No\n";
}


int main()
{ 
    // #ifndef LOCAL
    //     freopen("CP/input.txt","r",stdin);
    //     cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    //     freopen("CP/output.txt","w",stdout);
    // #endif
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