#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cou=0;
int pa=0;
int ans[100];
void dfs(int n,int m,int *a,int x,int y,int cx,int cy,int t)
{
    vector<pair<int,int>>p;
            // cout<<"::=="<<x<<"::"<<y<<" ";
    *((a+x*m)+y)=1;
    if(x+1<n)
    {p.push_back({x+1,y});}
    if(x-1>=0)
    {p.push_back({x-1,y});}
    if(y-1>=0)
    {p.push_back({x,y-1});}
    if(y+1<m)
    {p.push_back({x,y+1});}
    for(auto l=p.begin();l!=p.end();l++)
        {
            int i=(*l).first,j=(*l).second;
            cout<<"::=="<<x<<"::"<<y<<"  "<<cou<<"\\"<<t<<"\n";
            if(i==cx && j==y){
                // cou++;
                if(t>0)
                    cou+=t+1;
            t=0;
                // cout<<t<<":::"<<cou<<"\n";
            }
            if(*((a+i*m)+j)==0)
                {t++;dfs(n,m,a,i,j,cx,cy,t);
                // cout<<i<<":"<<j<<"--"<<t<<"{}"<<cou<<"\n";
                    }
        cout<<"\n";
        }

}
int main()
{
    int n,m,k,x,y;cin>>n>>m>>k>>x>>y;x--;y--;
    int a[n][m]={0};
    for(int i=0;i<n;i++)
    {
        string s;
        for(int j=0;j<m;j++)
            {
                cin>>s;
                if(s[0]=='*')a[i][j]=1;
            }
    }
    int cx=x,cy=y;
    dfs(n,m,(int*)a,x,y,cx,cy,0);   
    cout<<cou<<" ";
    if(cou>=k)cout<<"YES\n";
    else cout<<"NO\n";
}
/*
5 5
14 1 2
. . . * *
* . . . *
* . . . .
. * . . .
. * . . .




3 3 
5
1 1 
. . . 
. * . 
. . *
*/