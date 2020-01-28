#include<iostream>
using namespace std;
typedef long long ll;
int  main()
{
    ll p=2,w,h,w1,w2,h1,h2;
    cin>>w>>h>>w1>>h1>>w2>>h2;
    // cout<<"\n";
    while(h--)
    {
        w=w+h+1;
        if(h+1==h1)
        {
            w-=w1;
        }
        else if(h+1==h2)
        {
            w-=w2;
        }
        if(w<0) w=0;
    // cout<<w<<" "<<h+1<<"\n";
    }   
    cout<<w<<"\n";
}