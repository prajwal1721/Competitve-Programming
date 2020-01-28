#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,m,c[10],t;
    cin>>n>>m;
    ll seq[15];
    for(ll i=0;i<n;i++)
        cin>>seq[i];
    for(ll j=0;j<10;j++)
        c[j]=0;
    for(ll j=0;j<m;j++)
        {

            cin>>t;
            c[t]++;
        }
    for(ll i=0;i<n;i++)
    {
            if(c[seq[i]])
                cout<<seq[i]<<" ";
    }
    cout<<'\n';
}