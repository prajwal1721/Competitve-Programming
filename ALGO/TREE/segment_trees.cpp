#include <bits/stdc++.h>
using namespace std;
int arr[1000005],seg[1000005*4];
int build(int ind,int s,int e)
{
    if(s==e)return seg[ind]=arr[s];
    int m=(s+e)/2;
    seg[ind]=max(build(ind*2+1,s,m),build(ind*2+2,m+1,e));
    return  seg[ind];
}
int query(int ind,int low,int high,int l,int r)
{
    if(low>=l && high<=r)return seg[ind];
    if(low>r || high<l)return INT32_MIN;
    int m=(low+high)/2;
        return max(query(ind*2+1,low,m,l,r),query(ind*2+2,m+1,high,l,r));
}
int  main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){cin>>arr[i];}
    build(0,0,n-1);
    for(int i=0;i<4*n;i++)
        cout<<seg[i]<<" ";
    cout<<"\n";
    int q,l,r;cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        cout<<query(1,0,n-1,l,r);
    }
}