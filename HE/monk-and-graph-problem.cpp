// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/monk-and-graph-problem/
#include<bits/stdc++.h>
using namespace std;
void bfs(map<pair<int,int>,int>data,vector<int> node[],int*ans,int n)
{
    int visited[n+1]={0};
    int v_count=0;
    for(int i=1;i<=n && v_count<n;i++)
    {
        int t_ans=0;
        if(visited[i])continue;
        queue<int>q;
        q.push(i);v_count++;
        while (!q.empty())
        {
            int s=q.front();q.pop();
            // cout<<s<<":::";
            for(auto l=node[s].begin();l!=node[s].end();l++)
            {
                // cout<<*l<<" ";
                if(!visited[*l]){q.push(*l);visited[*l]=1;v_count++;}
                if(*l>s)
                {t_ans+=data[{s,*l}];
                // cout<<s<<" "<<*l<<"::"<<t_ans<<" "<<data[{s,*l}]<<"\n";
                data[{s,*l}]=0;}
                else 
                {t_ans+=data[{*l,s}];
                // cout<<*l<<" "<<s<<"::"<<t_ans<<" " <<data[{*l,s}]<<"\n";
                data[{*l,s}]=0;
                }
            }
            // cout<<"\n";
        }
        *ans=max(*ans,t_ans);
    }
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    map<pair<int,int>,int>data;
    vector<int> node[n+1];
    int u,v,w;
    while (m--)
    {
        cin>>u>>v;
        node[u].push_back(v);
        node[v].push_back(u);
        if(u>v){int t=u;u=v;v=t;}
        if(data[{u,v}])data[{u,v}]++;
        else data[{u,v}]=1;
    }
    int ans=0;
    bfs(data,node,&ans,n);
    cout<<ans<<"\n";    
}

/*
6 3
1 2
2 3
4 5

ans=2
*/