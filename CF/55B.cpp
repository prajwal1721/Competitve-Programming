#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> a;
    ll p;
    for(ll i=0;i<4;i++)
        {
            cin>>p;
            a.push_back(p);
        }
    char ch;
    vector <char> c;
    for(ll i=0;i<3;i++)
        {
            cin>>ch;
            c.push_back(ch);
        }
    sort(c.begin(),c.end());
    sort(a.begin(),a.end());
    if(c[0]==c[1]&&c[1]==c[2])
    {
        if(c[1]=='+')
            cout<<a[0]+a[1]+a[2]+a[3]<<'\n';
        else 
            cout<<a[0]*a[1]*a[2]*a[3]<<'\n';
    }
    else if(c[1]==c[2] && c[1]=='+')
        cout<<(a[3]+a[1]+a[2])*a[0]<<'\n';
    else 
        cout<<(a[0]*a[3])+(a[2]*a[1])<<'\n';
}
            
