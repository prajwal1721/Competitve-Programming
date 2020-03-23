#include<bits/stdc++.h>
using namespace std;
int answer[182][182];
int visited[182][182]={0};
void ans(int cx,int cy,int n,int m,map<pair<int,int>,int> p)
{
    visited[cx][cy]=1;
    if(p[{cx,cy}]==1)answer[cx][cy]=0;
    int d=answer[cx][cy];
    if(cx-1>0 && p[{cx-1,cy}]==0 && answer[cx-1][cy]>d+1){answer[cx-1][cy]=d+1;ans(cx-1,cy,n,m,p);}
    if(cy-1>0 && p[{cx,cy-1}]==0 && answer[cx][cy-1]>d+1){answer[cx][cy-1]=d+1;ans(cx,cy-1,n,m,p);}
    if(cx+1<=n && p[{cx+1,cy}]==0&& answer[cx+1][cy]>d+1){answer[cx+1][cy]=d+1;ans(cx+1,cy,n,m,p);}
    if(cy+1<=m && p[{cx,cy+1}]==0&& answer[cx][cy+1]>d+1){answer[cx][cy+1]=d+1;ans(cx,cy+1,n,m,p);}


}
int main()
{
    int q;cin>>q;
    while (q--)
    {
        queue<pair<int,int>>check;
        int n,m;cin>>n>>m;int x,y;
        map <pair<int,int>,int> p;
            int i=1,j=1,t;
        int f=1;
        while (i<=n)
        {
            j=0;string s;cin>>s;
            while(j<s.length())
            {
                p[{i,j+1}]=s[j]-'0';
                if(p[{i,j+1}]==1){x=i;y=j+1;check.push({x,y});}
                j++;
            }   i++;
        }  
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                answer[i][j]=INT16_MAX; 
        while (!check.empty())
        {
            tie(x,y)=check.front();
            ans(x,y,n,m,p);
            check.pop();
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<answer[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
}