#include<iostream>
#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int main()
{
    long long t,c,i=2,a,b,n,ans;
    cin>>a>>b>>n;
        c=b-a;
    int p=n%6 ;
    if(p==0) p+=6;
    if(p>3 &&p<=6)
    {
        if(p-3==1) ans=-a;
        if(p-3==2) ans=-b;
        if(p-3==3) ans=-c;
    }
    else
    {
        if(p==1) ans=a;
        if(p==2) ans=b;
        if(p==3) ans=c;
    }
    ans%= 1000000007 ;
    if(ans<0)
    ans=ans+1000000007;
    cout<<ans<<"\n";
}
    