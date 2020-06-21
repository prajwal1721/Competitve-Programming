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
ll dp[100][100]={0};
ll n,a[100][100];
ll ans=0;
ll calHistogramArea(vector<ll> arr)
{
    stack<ll> st;
    ll area=0,mx=0;
    for(int i=0;i<arr.size();)
    {
        if(st.empty() || arr[st.top()-1]<=arr[i])
            {st.push(i+1);i++;}
        else
        {
            if(st.size()==1)
            {
                area=arr[st.top()-1]*(i-1);
            }
            else 
            {
                area=arr[st.top()-1]*(i-st.top()+1);
            }
            mx=max(mx,area);
            st.pop();
        }
    }
    while(!st.empty())
    {
        if(st.size()==1)
            area=arr[st.top()-1]*(arr.size());
        else 
            area=arr[st.top()-1]*(arr.size()-st.top()+1);
        st.pop();
        mx=max(mx,area);
    }
    return mx;
}
void Cal(int col)
{
    vector<ll> arr;
    for(int j=0;j<n;j++)
    {
        if(a[j][col]==1)arr.push_back(dp[j][col]);
    }
    ans=max(ans,calHistogramArea(arr));
    // cout<<row<<" "<<col<<" "<<ans<<"\n";
}
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int j=0;j<n;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)dp[i][j]=a[i][j];
            else dp[i][j]=a[i][j]+dp[i+1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        Cal(i);
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