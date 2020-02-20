#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    vector<pair<ll,ll>> chess1,prog1,prog2,chess2;
    ll n,t,a,b,cn,cm,m;cin>>n;cn=n;
    while (cn--)
    {
        cin>>a>>b;chess1.push_back(pair<ll,ll>(a,b));chess2.push_back(pair<ll,ll>(b,a));
    }cin>>m;cm=m;
    while (cm--)
    {
        cin>>a>>b;prog1.push_back(pair<ll,ll>(a,b));prog2.push_back(pair<ll,ll>(b,a));
    }
    sort(chess1.begin(),chess1.end());
    sort(chess2.begin(),chess2.end());
    sort(prog1.begin(),prog1.end());
    sort(prog2.begin(),prog2.end());
    ll ma=max(((*prog1.rbegin()).first-(*chess2.begin()).first),(((*chess1.rbegin()).first-((*prog2.begin()).first))));
    cout<<(int)max(ma,(ll)0)<<"\n";
}