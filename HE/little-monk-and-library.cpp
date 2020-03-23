// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-monk-and-library/
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n,cn,i=0,t;cin>>n;cn=n;
    vector<int>a,b;
    while (cn--)
    {
        cin>>t;a.push_back(t);
    }i=0;cn=n;
    while (cn--)
    {
        cin>>t;b.push_back(t);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(i=0;i<n;i++)
        ans+=abs(b[i]-a[i]);
    cout<<ans<<"\n";
}