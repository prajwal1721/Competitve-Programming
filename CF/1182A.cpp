#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n%2)
        cout<<0<<'\n';
    else
        cout<<(long)pow(2,(n/2))<<'\n';
}