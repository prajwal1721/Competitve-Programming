#include<iostream>
#include<bits/stdc++.h> 
#include<cmath>
using namespace std;
int main()
{
    long long q;
    cin>>q;
    while(q--)
    {
        long long x,y,range;
        cin>>x>>y;
        long long count=0;
        range=abs(y-x);
        count+=range/5;
        range-=(range/5)*5;
        count+=range/2;
        range-=(range/2)*2;
        count+=range;
        cout<<count<<"\n";
    }    
}