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
        l avens[200000],mons[200000],rem[200000];
        l mon,aven,c=1;
        cin>>aven>>mon;
        for(int i=0;i<aven;i++)
            cin>>avens[i];
        for(int i=0;i<mon;i++)
            cin>>mons[i];
            sort(avens,avens+aven);
            sort(mons,mons+mon);
            if(mon>aven)
              {c=0;  goto l;}
        for(int i=mon-1,j=aven-1;j>=0 && i>=0;j--,i--)
            {
                if(avens[j]<mons[i])
                {
                    c=0;break;
                }
            }
            l:
        if(c) cout<<"Won\n";
        else cout<<"Impossible\n";
    }
}