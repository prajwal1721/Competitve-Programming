#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll,ll>>adj[200007];
ll visited[200007]={0},dp[200007]={0},level[200007]={0};

ll dfs(ll n){
    if(visited[n])return dp[n];
    for(auto i:adj[n]){
        if(level[i.first]>=level[n]){
            dp[n]=min(dp[n],2*(i.second)+dfs(i.first));
        }
    }
    visited[n]=1;
    return dp[n];
}
void bfs_level(ll n){
    queue<int> q;
    q.push(n);
    level[n]=0;
    while(!q.empty()){
        ll t=q.front();q.pop();
        visited[t]=1;
        for(auto i:adj[t]){
            if(!visited[i.first])
                {level[i.first]=level[t]+1;q.push(i.first);}
        }
    }
}
void bfs_optimize(ll n){
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        ll t=q.front();q.pop();
        visited[t]=1;
        for(auto i:adj[t]){
            dp[i.first]=min(dp[i.first],i.second*2+dp[t]);
            // if(!visited[i.first])
            if(level[i.first]>level[t])
                q.push(i.first);
        }
    }
}
void solve() {
     ll t;
    vector<ll> A;
    ll m,n;
    cin>>n>>m;
    for(ll i=0;i<n;i++){adj[i+1].clear();visited[i]=0;level[i]=0;}
    for(ll i=0;i<m;i++){
        vector<ll>r;
        for(ll ii=0;ii<3;ii++){
            cin>>t;
            r.push_back(t);
        }
        adj[r[0]].push_back({r[1],r[2]});
        adj[r[1]].push_back({r[0],r[2]});
        r.clear();
    }
    for(ll i=0;i<n;i++){cin>>t;A.push_back(t);dp[i+1]=t;}

    
    vector<ll> ans;
  

    for(ll i=1;i<=n;i++)visited[i]=0;
    for(ll i=1;i<=n;i++){
        if(!visited[i])
            bfs_level(i);
    }
    // for(ll k=0;k<5;k++)
    {for(ll i=1;i<=n;i++)visited[i]=0;
    
    for(ll i=1;i<=n;i++){
        if(!visited[i])
            dfs(i);
    }
    for(ll i=1;i<=n;i++)visited[i]=0;
    
    for(ll i=1;i<=n;i++){
        if(level[i]==0){
           
            bfs_optimize(i);
        }
    }
    }
    for(ll i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<"\n";
    // for(int i=0;i<n;i++)ans.push_back(dp[i+1]);
}

int main(){
    solve();   
}