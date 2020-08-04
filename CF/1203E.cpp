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
ll fre[150004]={0},lia[150004];
void solve()
{
    ll n,ans=0,pre=1,t;cin>>n;
    for(int i=0;i<n;i++){cin>>t;fre[t]++;}
    fre[0]=-1;
    for(int i=1;i<=150002;i++){
        // if(!fre[i] && !lia[i])continue;
        if(fre[i-1]!=-1 && lia[i]){fre[i-1]=-1;lia[i]--;ans++;}
        else if(fre[i-1]!=-1 && fre[i]){fre[i-1]=-1;fre[i]--;ans++;}
        if(lia[i]){
            ans++;
            lia[i+1]+=(fre[i]);
            fre[i]=-1;
        }
        else if(!lia[i] && fre[i]){ans++;fre[i]--;lia[i+1]=max(0LL,fre[i]);fre[i]=-1;}
    }
    // for(int i=0;i<10;i++){cout<<fre[i]<<" ";}cout<<"\n";
    // for(int i=0;i<10;i++){cout<<lia[i]<<" ";}cout<<"\n";
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