#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef long int l;
int  main()
{
    l n;
    cin>>n;
    while(n--)
    {
        l a,ans;
        cin>>a;
        if(a/3)
            ans=2*a*(a/3);
        else
            ans=2*a;
        ans=ans%1000000007;
        cout<<ans<<"\n";
    }
}
