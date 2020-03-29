//check once dp 


#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
vector<ll> v;
void solve(ll a ,ll b)
{
    ll zcnt=0,s=0,no=9,i=0,n;
    string l="";
    while (s+no<=b)
    {v.push_back(no);s+=no;i++;}
    if(s<b)
    {v.push_back(b-s);i++;}
    while (i<a)
    {v.push_back(0);i++;}
    sort(v.begin(),v.end(),greater<ll>());
    n=v.size();
    for(auto it=v.begin();it!=v.end();it++)
    {
        l+=to_string(*it);
    }
    // cout<<l<<" ";
    ll ans[10]={0};s=0;i=0;
    while (s<b || i<a)
    {
        if(s+9<=b){s+=9;ans[9]++;}
        else if(s<b) {ans[b-s]++;s+=(b-s);}
        else ans[0]++;
        i++;
    }

    if(ans[0]>0)
    {
        if(ans[1]==0 )
        {
            // cout<<"on";
            for( i=2;i<10;i++)
            {
                 if(ans[i]>0){ans[i-1]++;ans[i]--;ans[1]++;ans[0]--;}
            }
        }
        // else if(ans[1]>1)
    }
    for(ll j=8,i=1;j>=2 && i<=8;)
    {
        if(i==j)break;
        // cout<<i<<" "<<j<<"\n";
        if(i==1 && ans[1]>1){
            while (ans[j]==0 && j!=i)j--;
            if(i==j)break;
            ans[j]--;ans[i]--;
            ans[i-1]++;ans[j+1]++;
        }
        else if(i!=1 && ans[i]>0){
            while (ans[j]==0 && j!=i)j--;
            if(i==j)break;
            ans[j]--;ans[i]--;
            ans[i-1]++;ans[j+1]++;
        }
        else
        {i++;}
    }
    string sm="";
    if(ans[1]>0){sm+="1";ans[1]--;}
    for(i=0;i<10;i++)
        {
            // cout<<ans[i]<<" ";
            while(ans[i]>0){
                sm+=to_string(i);ans[i]--;
            }
        }
    cout<<sm<<" "<<l;
    cout<<"\n";
}
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n, m,cm,cn;
        cin>>n>>m;cm=m;cn=n;
        // cout<<"nn";
        if(m>9*n || m==0 && n>1){cout<<"-1 -1\n";}
        // else if(m==0 && n==1)cout<<"0 0\n";
        else
        {
            solve(n,m);
        }
}
