/* 
4 4 1 10 15
3 3 2 3 2 3 4 2 1 3 3
 */

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[100007];
int visited[100007]={0},dp[100007],level[100007];

int dfs(int n){
    // cout<<n<<" ";
    // if(visited[n])return dp[n];
    // cout<<n<<"::::"<<dp[n]<<"\n";
    for(auto i:adj[n]){
        // cout<<level[i.first]<<' '<<level[n]<<"\n";
        // cout<<"["<<i.first<<']';
        if(level[i.first]>level[n] ){
            cout<<"in"<<n<<":"<<i.first<<" "<<i.second*2+dfs(i.first)<<"\n";
            dp[n]=min(dp[n],i.second*2+dfs(i.first));
        }
    }
    // cout<<'\n';
    visited[n]=1;
    return dp[n];
}
void bfs_level(int n){
    queue<int> q;
    q.push(n);
    level[n]=0;
    while(!q.empty()){
        int t=q.front();q.pop();
        visited[t]=1;
        for(auto i:adj[t]){
            if(!visited[i.first])
                {level[i.first]=level[t]+1;q.push(i.first);}
        }
    }
}
void bfs_optimize(int n){
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int t=q.front();q.pop();
        visited[t]=1;
        for(auto i:adj[t]){
            if(i.second*2+dp[t]<dp[i.first])
                {dp[i.first]=i.second*2+dp[t];}
            if(!visited[i.first])
                q.push(i.first);
        }
    }
}
void solve(){
    int t;
     vector<int> A;
     vector<vector<int>>B;
     int m,n;cin>>n;
    for(int i=0;i<n;i++){cin>>t;A.push_back(t);}
    cin>>m;
    for(int i=0;i<m;i++){
        vector<int>r;
        for(int ii=0;ii<3;ii++){
            cin>>t;
            r.push_back(t);
        }
        B.push_back(r);
    }


    vector<int> ans(n);
    for(int i=0;i<n;i++)dp[i+1]=A[i];
    for(auto i:B){
        adj[i[0]].push_back({i[1],i[2]});
        adj[i[1]].push_back({i[0],i[2]});
    }
    for(int i=1;i<=n;i++)visited[i]=0;
    for(int i=1;i<=n;i++){
        if(!visited[i])
            bfs_level(i);
    }
    for(int i=1;i<=n;i++)visited[i]=0;
    for(int i=1;i<=n;i++)cout<<level[i]<<":";cout<<'\n';
    for(int i=1;i<=n;i++){
        if(!visited[i])
            dfs(i);
    }
    for(int i=1;i<=n;i++)visited[i]=0;
    // for(int i=1;i<=n;i++)cout<<dp[i]<<":";cout<<'\n';
    
    for(int i=1;i<=n;i++){
        if(!level[i]){
            // cout<<i<<" ";
            bfs_optimize(i);
        }

    }
    for(int i=1;i<=n;i++)cout<<dp[i]<<":";cout<<'\n';
    for(int i=0;i<n;i++)ans[i]=dp[i+1];
    // return ans;
}
int main(){
    solve();   
}