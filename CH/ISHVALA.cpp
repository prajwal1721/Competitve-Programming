#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        // ios::sync_with_stdio(0);
        // cin.tie(0);  
        typedef int ll;
        ll i1=0,j1=0,i=0,j=0,n,sum=0,t,m,x,y,s;
        cin>>n>>m>>x>>y>>s;
        ll X[10000],Y[10000];
        X[i++]=0;
        Y[j++]=0;
        while(i<=x)
        {cin>>X[i++];}
        while(j<=y)
        {cin>>Y[j++];}
        i1=1;j1=1;
        X[i]=n+1;
        Y[j]=m+1;
        ll sum_x=0,sum_y=0;
        while(i1<=i)
        {
            ll p=((ll)((X[i1]-X[i1-1]-1)/s)*s);
            // cout<<p<<"::"<<X[i1]<<".."<<X[i-1]<<"\n";
            if(p>0)sum_x+=p;
            i1++;
        }
        while(j1<=j)
        {
            ll p=((ll)((Y[j1]-Y[j1-1]-1)/s)*s);j1++;
            if(p>0)sum_y+=p;
        }
        cout<<(ll)sum_x/s*(ll)sum_y/s<<"\n";
    }
}