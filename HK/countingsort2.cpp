#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i=0,n,t;cin>>n;
    int a[100]={0};
    while (i<n)
    {
        cin>>t;a[t]++;i++;
    }
    for(int i=0;i<100;i++)
     {
         while (a[i]--)
            cout<<i<<" ";
     }   
    cout<<"\n";
}