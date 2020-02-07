#include<iostream>
#include<cmath>
#include<set>
#include<vector>
using namespace  std;
int main()
{
    typedef long long ll;

    ll n,s1,s2,s3,m,c;cin>>n>>m;
    ll a[n+1]={0};
    while(m--)
    {
        ll sum=6;
        cin>>s1>>s2>>s3;
        sum=sum-a[s1]-a[s2]-a[s3];
        // cout<<sum<<"\n";
        if(a[s1]==0)
        {
            if(sum==6 || sum==4|| sum==1)a[s1]=1;
            else if(sum==2||sum==5)a[s1]=2;
            else if(sum==3 && a[s3]!=3 && a[s2]!=3)a[s1]=3;
            else if(sum==3 && a[s3]!=2 && a[s2]!=2)a[s1]=2;
            else if(sum==3 && a[s3]!=1 && a[s2]!=1)a[s1]=1;
            sum-=a[s1];
        }
        if(a[s2]==0)
        {
            if(sum==6 || sum==4|| sum==1)a[s2]=1;
            else if(sum==2||sum==5)a[s2]=2;
            else if(sum==3 && a[s3]!=3 && a[s1]!=3)a[s2]=3;
            else if(sum==3 && a[s3]!=2 && a[s1]!=2)a[s2]=2;
            else if(sum==3 && a[s3]!=1 && a[s1]!=1)a[s2]=1;
            sum-=a[s2];
        }
        // cout<<sum<<"::"<<s1<<":"<<s2<<":"<<s3<<"\n";
        if(a[s3]==0)
        {
            if(sum==6 || sum==4|| sum==1)a[s3]=1;
            else if(sum==2||sum==5)a[s3]=2;
            else if(sum==3 && a[s1]!=3 && a[s2]!=3)a[s3]=3;
            else if(sum==3 && a[s1]!=2 && a[s2]!=2)a[s3]=2;
            else if(sum==3 && a[s1]!=1 && a[s2]!=1)a[s3]=1;
            sum-=a[s3];
        }
    }
    for(ll i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}