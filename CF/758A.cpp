#include<iostream>
#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int main()
{
    long long add=0,n,c=0;
    long int a[120],max;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            add+=a[i];
        }
    max=*max_element(a, a + n);
    c=max*n-add;
    cout<<c<<'\n';
}
