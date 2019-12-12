#include<iostream>
#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long n,no,each,extra;
    cin>>n>>no>>extra>>each;
    long long l=n/(each*no);
    n-=l*each*no;
    // long long  t=n%(each);
    // if(t==0){t=each; t=n/t;}
    // else  
    l=l*no+(extra*l)+n/each;
    cout<<l<<'\n';
    }
}