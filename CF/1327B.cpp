#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
    ll q;cin>>q;
    while(q--)
    {
        ll n,cnt=0,t;cin>>n;
        queue<ll>qu;
        int paired[n]={0};
        int visited[n+1]={0};
        vector<int>v[n];
        for(int i=0;i<n;i++)
        {
            int no,f=1;cin>>no;
            for(int j=0;j<no;j++)
            {
                cin>>t;
                v[i].push_back(t);
                if(!visited[t]&& f){visited[t]=1;f=0;cnt++;}
            }
            if(!f)
            paired[i]=1;
            else 
            qu.push(i);
        }
        if(cnt==n)cout<<"OPTIMAL\n";
        else
        {
            int change=0;
            // cout<<qu.empty()<<"\n";
            while (!qu.empty())
            {
                int cur=qu.front();qu.pop();
                for(int i=1;i<=n;i++)
                {
                    if(!visited[i])
                    {
                        auto it=v[cur].begin();
                        for(;it!=v[cur].end();it++)
                        {
                            if(i==*it)break;
                        }
                        if(it==v[cur].end()){change=1;cout<<"IMPROVE\n"<<cur+1<<" "<<i<<"\n";i=n;goto l;}
                    }
                }
            }
            l:
            if(!change)cout<<"OPTIMAL\n";
        }
    }    
}