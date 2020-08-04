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
    ll n,t,m;cin>>n;
    string out,in;cin>>in>>out;
    ll arr[100][100]={0};
    for(int i=0;i<n;i++)
    {   
        arr[i][i]=0;
        for(int j=i+1;j<n;j++)
        {
            
            if(out[j-1]=='N'|| in[j]=='N' || arr[i][j-1])arr[i][j]=1;
        }
        for(int j=i-1;j>=0;j--)
        {
            if(in[j]=='N'|| out[j+1]=='N' || arr[i][j+1])arr[i][j]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1 && i!=j)cout<<"N";
            else cout<<"Y";
        }
        cout<<"\n";
    }
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            cout<<"Case #"<<i<<":\n"; 
            solve();
            i++;
        }
    return 0;
}