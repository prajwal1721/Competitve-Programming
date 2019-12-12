#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,m,a,b,count=0;
    cin>>n>>m;
    for(ll j=0;j<n;j++)
        for(ll i=0;i<m;i++)
            {
                cin>>a>>b;
                if(a||b)
                    count++;
            }
    cout<<count<<'\n';

}