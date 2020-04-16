// link:https://www.spoj.com/problems/TRT
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow TRT.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
    vector<ll> v;
ll a[2002][2002]={0};
ll  solve(ll st,ll ed, ll yr)
{
    if(a[st][ed]!=0 )return a[st][ed];
    if(st>ed) return 0;
    a[st][ed]= max(solve(st+1,ed,yr+1)+v[st]*yr,solve(st,ed-1,yr+1)+v[ed]*yr);
    return a[st][ed];
}
int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t,n,cn;cin>>t;cn=t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            cin>>n;v.push_back(n);
        }
    cout<<solve(0,cn-1,1)<<"\n";
    return 0;
}