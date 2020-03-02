    #include<iostream>
    #include<vector>
    #include<queue>
    using namespace std;
    vector<int>  bfs(vector<int> a[],int n, int no,vector<int> ans)
    {
        int visited[no+1]={0};
        queue <int> q;
        q.push(n);
        while (!q.empty())
        {
            int n=q.front();q.pop();
            if(!visited[n])
            {
                ans.push_back(n);visited[n]=1;
                for(auto i =a[n].begin();i!=a[n].end();i++)
                    if(!visited[*i])q.push(*i);
            }
        }
        return ans;
    }

void create(int u,int v,vector<int> a[])
{
    a[u].push_back(v);
    a[v].push_back(u);
}    
int main()
{
    int n,m;cin>>n>>m;
    vector<int > a[n+1];
    while (m--)
    {
        int u,v;cin>>u>>v;
        create(u,v,a);
    }
    bool visited[n+1]={0};
    vector<int >ans;
    ans=bfs(a,1,n,ans);
    for(auto i=ans.begin();i!=ans.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
}
