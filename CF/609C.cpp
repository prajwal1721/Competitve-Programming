// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: not done 
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
    ll n,t,m=0;cin>>n;
    vector<ll> v1,v2;v2.push_back(0);
    for(int i=0;i<n;i++){cin>>t;v1.push_back(t);v2.push_back(v2[i-1]+t);m+=t;}
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(*v1.rbegin()-*v1.begin()<=1){cout<<"0\n";return ;}
    ll c=(m)/n,ans=INT32_MAX,a1=0;
    ll st=0,ed=n-1;
    // cout<<c<<"\n";
    for(int i=0;i<=n;i++)
    {
        if(c*i-v2[i]==(c+1)*(n-i)-(m-v2[i]))
            ans=min(ans,(max(0LL,(c+1)*i-(m-v2[i]))!=0 ?(c+2)*i-(m-v2[i]):INT32_MAX));
    
    }
    for(int i=0;i<=n;i++)
    {
        if(c*(i+1)-v2[i]==(c+2)*(n-i)-(m-v2[i]))
            ans=min(ans,(max(0LL,(c+2)*i-(m-v2[i]))!=0 ?(c+2)*i-(m-v2[i]):INT32_MAX));
    }
    if(m%n==0)
    while(st<ed)
    {
        if(c-v1[st]==v1[ed]-c){a1+=c-v1[st];st++;ed--;}
        else if(c-v1[st]>v1[ed]-c)
            {
                {a1+=v1[ed]-c;v1[st]-=(v1[ed]-c-1);ed--;}
            }
        else if(c-v1[st]<v1[ed]-c)
            {a1+=c-v1[st];v1[ed]-=(c-v1[st]);st++;}
            cout<<a1<<"\n";
        return;
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