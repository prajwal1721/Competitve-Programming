    #include<iostream>
    #include<cmath>
    #include<set>
    #include<vector>
    #define SWAP(x,y,t)t=x,x=y,y=t
    using namespace std;
    int travesed=0;
    set<int> a[10006];
    int visited[10006]={0};
    void dfs(int i)
    {
        travesed++;
        visited[i]=1;
        set<int>::iterator j;
        for( j=a[i].begin();j!=a[i].end();j++)
        {
            // cout<<travesed<<"::"<<*j<<"\n";
            if(!visited[*j])
                dfs(*j);
        }
    }
    void add_edge(int u,int v)
    {
        a[v].insert(u);
        a[u].insert(v);
    }
    int main()
    {
        int n,m;cin>>n>>m;
        int no=0,u,v,q;
        set<pair<int,int>>s;
        while (m--)
        {
            cin>>u>>v;
            if(u<v)SWAP(u,v,q);
            if(u!=v)
                {s.insert(pair<int,int>(u,v));}
                add_edge(u,v);
        }
        if(s.size()!=n-1)cout<<"NO\n";
        else
        {
            dfs(u);
            /*
            for(auto ii=1;ii<=n;ii++)
            {
                cout<<ii<<"===";
                for(auto j=a[ii].begin();j!=a[ii].end();j++)
                    cout<<*j<<":: ";
                cout<<"\n";
            }
            cout<<travesed<<"\n";*/
            if(travesed==n)
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
    }    
