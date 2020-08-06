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
    ll n,sum=0,t,m;cin>>n;
    vector<ll> w1,w2;
    for(int i=0;i<n;i++){
        cin>>t;
        sum+=t;
        if(t>0)w1.push_back(t);
        else if(t<0)w2.push_back(abs(t));
    }
    if(sum==0 ){
        int i=0,j=0;
        for(;i<w1.size()&& j<w2.size();i++,j++){
            if(w1[i]>w2[j]){sum=1;break;}
            if(w1[i]<w2[j]){sum=-1;break;}
        }
        if(i==w1.size() && j==w2.size()){
            if(t>0){sum=1;}
            if(t<0){sum=-1;}
        }
        else if(i==w1.size())sum=-1;
        else if(j==w2.size())sum=1;

    }
    if(sum>0)cout<<"first\n";
    if(sum<0)cout<<"second\n";


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