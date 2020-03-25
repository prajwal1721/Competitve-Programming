#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t2,n,mx=-1,mx_q=-1,ind_q=0,ind=0;cin>>n;
    for(int i=0;i<n;i++)
    {   
        cin>>t>>t2;
        if(t!=t2)
        {cout<<"Happy Alex\n";return 0;}
    }
    cout<<"Poor Alex\n";
}