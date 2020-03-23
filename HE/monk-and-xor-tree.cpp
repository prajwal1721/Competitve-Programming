// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/monk-and-xor-tree/
#include<bits/stdc++.h>
using namespace std;
int ans[100000];
int k,cnt=0;
vector<int>child;
void dfs_with_child(int n,vector<int>v[])
{
    for(int i=1;i<=n;i++)
    if(v[n].empty())child.push_back(i);
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n,cn,i=1;cin>>n>>k;cn=n;
    int a[n+2];
    while (cn--)
    {
        cin>>a[i++];
    }
    vector<int> v[n+1];
    cn=n;int t;i=2;
    int parent[n+1];
    while (cn-->1)
    {
        cin>>t;
        v[t].push_back(i);parent[i]=t;i++;
        // cout<<t<<" "<<i<<"\n";
    }
    int branch=(int)ceil(log2(n));
    int visited[n+1]={0};
    dfs_with_child(n,v);
    set<pair<int,int>>str;
    for(auto pl=child.begin();pl!=child.end();pl++)
    {
        int cur=*pl;
        vector<int>order;
        int fin=ans[cur];
        // cout<<fin<<" "<<cur<<"\n";
        while (cur!=1)
        {
            // cout<<cur<<"==";
            order.push_back(cur);cur=parent[cur];
        }
        order.push_back(1);
        // cout<<"\n";
        for(auto  it=order.begin();it!=order.end();it++)
        {
            t=0;
            for(auto  it1=it;it1!=order.end();it1++)
            {
            int p=*it1;
            t=t^a[p];
            if((t)==k){str.insert({*it,p});}
            }
        }
    }
    cout<<str.size()<<"\n";
}
 
/*
6 6
0 2 4 4 2 4
1 2 2 1 5
*/