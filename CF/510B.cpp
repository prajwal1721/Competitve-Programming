#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll visited[52][52]={0};
ll f=0,m,n;
void check(char cur,vector<char> a[],ll len,ll i,ll j,ll pre_x,ll pre_y)
{
    visited[i][j]=1;
    if(a[i][j]==cur)len++;
    else return;
    // cout<<i<<" "<<j<<" "<<len<<cur<<" "<<a[i][j]<<pre_x<<" "<<pre_y<<"\n";
    if(len>=3 && i+1<n && a[i+1][j]==cur && ((i+1)!=pre_x || j!=pre_y)  && visited[i+1][j]){f=1;}
    if(len>=3 && i-1>=0 && a[i-1][j]==cur && ((i-1)!=pre_x || j!=pre_y)  && visited[i-1][j]){f=1;}
    if(len>=3 && j+1<m && a[i][j+1]==cur && (i!=pre_x || (j+1)!=pre_y ) && visited[i][j+1]){f=1;}
    if(len>=3 && j-1>=0 && a[i][j-1]==cur && (i!=pre_x || (j-1)!=pre_y ) && visited[i][j-1]){f=1;}
    if(f==1)return ;
    
        if((i+1)<n && !visited[i+1][j])check(cur,a,len,i+1,j,i,j);
        if((j+1)<m && !visited[i][j+1])check(cur,a,len,i,j+1,i,j);
        if((i-1)>=0 && !visited[i-1][j])check(cur,a,len,i-1,j,i,j);
        if((j-1)>=0 && !visited[i][j-1])check(cur,a,len,i,j-1,i,j);
}
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
        cin>>n>>m;
        vector<char> a[n];char t;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>t;a[i].push_back(t);
            }
        }
        for(ll i=0;i<n && !f;i++)
        {
            for(ll j=0;j<m&& !f;j++)
                {
                if(!visited[i][j]){check(a[i][j],a,0,i,j,-1,-1);}}
        }
        if(f)cout<<"Yes\n";
        else cout<<"No\n";
}
            