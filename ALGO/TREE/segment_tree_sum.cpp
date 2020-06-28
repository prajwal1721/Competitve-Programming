#include<bits/stdc++.h>
using  namespace std;
int seg[100005];
vector<int> v;
int build(int st,int ed,int ind)
{
    if(st==ed)return  seg[ind]=v[st];
    int m=(st+ed)/2;
    return seg[ind]=build(st,m,ind*2+1)+build(m+1,ed,ind*2+2);
}
int query(int ind,int l,int r,int low,int high)
{
    if(low>high)return 0;
    if(low>r || high<l)return 0;
    if(l<=low && r>=high)return seg[ind];
    int m=(low+high)/2;
    return query(ind*2+1,l,r,low,m)+query(ind*2+2,l,r,m+1,high);
}
void update(int ind ,int idx,int st,int ed)
{
    if(st>ed){cout<<"FK";return ;}
    if(st==ed) {seg[ind]=v[st];return ;}
    int m=(st+ed)/2;
    if(m>=idx) update(ind*2+1,idx,st,m);
    else update(ind*2+2,idx,m+1,ed);
    seg[ind]=seg[ind*2+1]+seg[ind*2+2];
}
int main()
{
    int n,t;cin>>n;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    build(v,0,n-1,0);
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        char c;
        int l,r;cin>>c>>l>>r;
        if(c=='q')
        cout<<query(0,l,r,0,n-1)<<"\n";
        else 
        {
            if(v[l]!=r)
            {
                v[l]=r;   
                update(v,0,l,0,n-1);
            }
        }
    }
}