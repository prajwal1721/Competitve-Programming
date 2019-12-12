#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef long int l;
#define COMP(x,y) (x>y)?1:(x==y)?0:-1
int bin(int s,int e,int *a,int k);
int  main()
{
    l q;
    cin>>q;
    while(q--)
    {
        int avens[200000],mons[200000];
        l mon,aven,sa=0,sm=0;
        cin>>aven>>mon;
        for(int i=0;i<aven;i++)
            {
                cin>>avens[i];
            }
        for(int i=0;i<mon;i++)
            {
                cin>>mons[i];
            }
        sort(avens,avens+aven);
        sort(mons,mons+mon);
                // input complete


    int c=1;
    if(avens[aven-1]<mons[mon-1])
        c=0;
    int con=0;
    while(avens[aven-1]>=mons[mon-1] && con!=mon)
    {   
        // cout<<con<<" ::"<<mons[mon-1]<<"\n";
        // int ind=bin(0,mon,avens,mons[mon-1]);
        // if(ind!=-1)
        // {
        //     avens[ind]=0;
        //     mons[mon-1]=0;
        // }
        // else
        {
            avens[aven-1]-=mons[mon-1];
            mons[mon-1]=0;
        }
            con=0;

        for(int i=mon-1;i>=0;i--)
        {
            if(mons[i]>0)
            {
                c=0;
                break;                
            }
            else
            {
                con++;
            }
        }
        sort(avens,avens+aven); 
        sort(mons,mons+mon);
    }

        if(con==mon) cout<<"Won\n";
        else cout<<"Impossible\n";
    }
}
int bin(int s,int e,int *a,int k)
{
    int t;
    if(s<=e)
    {
        int m=(s+e)/2;
        switch (COMP(a[m],k))
        {
        case 0:
            return m+1;
        case 1:
            return bin(s,m-1,a,k);
        case -1:
            return bin(m+1,e,a,k);
        }
    }
    return -1;
}