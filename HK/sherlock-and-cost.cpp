#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,t;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){   
        cin>>t;
        v.push_back(t);
    }
    int dp[n+1]={0};
    if(n==2)cout<<max(v[1],v[0])-1<<"\n";
    if(n==3)cout<<max(2*v[1],v[0]+v[2])-2<<"\n";
    if(n<4)return;
    dp[0]=v[0]-1;
    dp[1]=max(2*(v[1]-1),dp[0]);
    int cnt=0;
    for(int i=2;i<n;i++){
        if(i==n-1)
            dp[i]=max(dp[i-1],dp[i-2]+(v[i]-1));
        else
            dp[i]=max(dp[i-1],dp[i-2]+2*(v[i]-1));
    }
    // just dp[n-1] is enough
    cout<<max(dp[n-1],dp[n-2])<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}
/* 
83
69 19 15 81 93 100 35 18 81 16 65 20 4 45 81 83 90 14 82 85 43 7 64 76 33 47 95 12 78 93 14 22 97 36 65 66 36 26 59 81 81 82 44 79 89 94 32 94 22 33 19 46 46 62 19 47 70 91 97 62 17 43 11 25 74 73 64 98 73 7 40 8 2 96 89 81 80 17 88 13 31 44 64
 */