 #include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
            ll t;cin>>t;
            while (t--)
            {
                vector<ll>v;
                ll n,cn,t;cin>>n;cn=n;while (cn--)
                {
                    cin>>t;v.push_back(t);
                }
                ll color[n+1]={0};
                color[0]=1;
                ll cur=1;
                for(int i=1;i<n-1;i++)
                {
                    if(v[i-1]==v[i+1] && v[i]==v[i-1] && color[i]==0){color[i]=color[i+1]=color[i-1];}
                    else if(color[i]==0 && v[i-1]!=v[i] && v[i-1]==v[i+1]){color[i+1]=color[i-1];
                    if(color[i-1]==1)
                    {color[i]=color[i-1]+1;cur=max(color[i],cur);}
                    else 
                    color[i]=color[i-1]-1;}
                    else if(color[i]==0 &&v[i-1]==v[i]){color[i]=color[i-1];}
                    else if(color[i]==0 &&v[i-1]!=v[i] && color[i-1]>=2){color[i]=color[i-1]-1;}
                    else if(color[i]==0 &&v[i-1]!=v[i] && color[i-1]==1){color[i]=color[i-1]+1;cur=max(color[i],cur);}
                    else if(color[i]==0){color[i]=color[i-1]+1;cur=max(color[i],cur);}
                }
                if(color[n-1]==0 && v[n-2]!=v[0])
                {
                    if(v[n-1]==v[0] && color[n-2]!=1)color[n-1]=1;
                    if(v[n-1]==v[n-2] )color[n-1]=color[n-2];
                    if(color[n-2]==1)
                    {color[n-1]=color[0]+1;cur=max(cur,color[n-1]);}
                    else if(color[n-2]>2)
                    {
                        color[n-1]=color[n-2]-1;
                        cur=max(cur,color[n-1]);
                    }
                    else if(2==color[n-2] )
                    {
                        if(cur==2){color[n-1]=3;cur=3;}
                        else color[n-1]=cur-1;
                    }
                }
                else if(color[n-1]==0) color[n-1]=color[0];
                cout<<cur<<"\n";
                for(int i=0;i<n;i++)
                    cout<<color[i]<<" ";
                    cout<<"\n";
            }
}