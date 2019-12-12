#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    
        long long int a[1000000];
        long long int n;
        cin>>n;
        int i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long s1=0,s2=0;
        for(i=0;i<floor(n/2);i++) 
        {
            // cout<<a[i]<<"c1::";
            s1+=a[i];
        }
        // cout<<endl;
        for(;i<n;i++) 
        {
            // cout<<a[i]<<"c2::";
            s2+=a[i];
        }
        cout<<s1*s1+s2*s2<<"\n";

}
