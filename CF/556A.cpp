#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a=0;
    string s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1') a++;
        else a--;
    }
    cout<<abs(a)<<'\n';
}