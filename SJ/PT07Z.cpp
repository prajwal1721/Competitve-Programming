#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int visited[1000]={0};
vector<ll> v[1000];
ll count=0;
void create(ll a,ll b)
{
    v[a].push_back(b);
    v[b].push_back(a);
}

void dfs(ll a)
{
        count++;visited[a]=1;
        for(auto m=v[a].begin();m!=v[a].end();m++)
        {
            if(!visited[*m])
            {
                dfs(*m);
            }
        }
}
int main()
{
    ll n,u,va;
    cin>>n;
    for (int i = 0; i <n-1; i++)
    {
        cin>>u>>va;
        create(u,va);
    }
    ll m=0;
    for(int i=1;i<=n;i++)
    {
        dfs(i);
        m=max(m,count);count=0;
    }
    if(m>=1)
    cout<<m-1<<"\n";
}