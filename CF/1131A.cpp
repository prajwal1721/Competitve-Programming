#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll w1,w2,h1,h2;
    cin>>w1>>h1>>w2>>h2;
    // ll x=(abs(w1-w2))?()   :0;
    ll ans=2*(h1+h2)+4+w1+w2+abs(w1-w2);
    cout<<ans<<'\n';
}