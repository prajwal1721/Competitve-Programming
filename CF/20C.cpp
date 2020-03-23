#include <bits/stdc++.h>
using namespace std;
int n;int ans[100000+2];
void final(int n)
{
    if(n!=1)final(ans[n]);
    cout<<n<<" ";}
int main()
{
    int m;
    cin >> n >> m;
vector<int> t[n+1];
map<pair<int, int>, int> data;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        t[u].push_back(v);
        t[v].push_back(u);
        if (u > v)
    {int te = u;u = v;v = te;}
        // if (data[{u, v}] >0)
            // data[{u, v}] = min(w,data[{u,v}]);
        // else
                data[{u, v}] = w;
    }
    int dist[n + 2];
    for(int i=0;i<=n+1;i++)
    dist[i]=100000;
    bool visited[n + 2] = {0};
    int f=0;
    priority_queue<pair<int, int>> q;
    dist[1] = 0;
    q.push({-dist[1],1});
    while (!q.empty())
    {
        int  w,s = q.top().second;q.pop();
        if (visited[s])continue;    
        if(s==n){f=1;}
        visited[s] = 1;
        for (auto i = t[s].begin(); i != t[s].end(); i++)
        {
            int v = *i;
            if (v <s)w = data[{v,s}];else w = data[{s,v}];
            if(dist[v]>dist[s] + w)
                {dist[v] = (dist[s] + w);ans[v]=s;}
            q.push({-dist[v], v});
        }
    }   
    if(!f){cout<<"-1\n";return 0;}
    final(n);
    cout <<"\n";
}
/*
5 6
1 2 5
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/
