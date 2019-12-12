#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef long int l;
int  main()
{
      l q;
    cin>>q;
    while(q--)
    {
        l n;
        cin>>n;
        int i=2;
        bool *a=new bool(n+1);
        for(l i=1;i<=n;i++)
            a[i]=0;
        while(i<=n)
        {
            for(l j=i;j<=n;)
            {
                a[j]=!a[j];
                j+=i;
            }
            i++;
        }
        l count=0;
        for(l i=1;i<=n;i++)
            if(a[i]==0) count++;
            cout<<count<<"\n";
    }
}