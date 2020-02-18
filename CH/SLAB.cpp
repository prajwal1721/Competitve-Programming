#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    while (n--)
    {
        ll t;cin>>t;
        cout<<(int)(t-(min(t,(ll)250000)*0+min((ll)250000,max(t-250000,(ll)0))*0.05+min((ll)250000,max(t-500000,(ll)0))*0.10+min((ll)250000,max(t-750000,(ll)0))*0.15+min((ll)250000,max(t-1000000,(ll)0))*0.20+min((ll)250000,max(t-1250000,(ll)0))*0.25+max(t-1500000,(ll)0)*0.30))<<"\n";
    }
}