#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i=0,n;cin>>n;
    vector<string>v[n+1];
    while (i<n)
    {
        int ind;
        string s;cin>>ind>>s;
        if(2*i<n)s="-";
        v[ind].push_back(s);i++;
    }
    for(int i=0;i<n;i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        // cout<<"\n";
    }
    cout<<"\n";
    
}