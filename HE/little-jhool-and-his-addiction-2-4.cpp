// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-jhool-and-his-addiction-2-4/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;cin>>q;
    while (q--)
    {
        
        int n,k;cin>>n>>k;
        int a[n],i=0;
        while (i<n)
        {
            cin>>a[i++];
        }
        sort(a,a+n);int mn=INT16_MAX,mx=INT16_MIN;
        for(int i=0;i<n/2;i++)
        {
            if(a[i]+a[n-i-1]>mx)mx=a[i]+a[n-i-1];
            if(a[i]+a[n-i-1]<mn)mn=a[i]+a[n-i-1];
        }
        cout<<mx-mn<<"\n";
        int ans=mx-mn;
        if(ans<k)cout<<"Chick magnet Jhool!\n";
        else if(ans==k)cout<<"Lucky chap!\n";
        else cout<<"No more girlfriends!\n";
    }
    
    
}