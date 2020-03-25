#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int l=1,h=1e9;
    while (l<h)
    {
        int m=(l+h)/2,s=0,v=m;
        while (v)
        {
            s+=v;
            v/=k;
        }
        if(s<n)l=m+1;
        else h=m;
    }
    
    cout<<l<<"\n";
}
