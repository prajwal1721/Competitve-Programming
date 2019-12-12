#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int p(int n);
int nop();
    typedef long long ll;
    vector <ll> prime;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll c=nop(),count=0;
    if(c<k) {cout<<"NO\n";return 0;}
    for(auto i=prime.begin()+2; *i<=n ;i++)
    for(auto j=prime.begin();j!=prime.end();j++)
        {
            if((*i-1)==*j+*(j+1))
                count++;
        }
    if(count>=k) cout<<"YES\n";
    else cout<<"NO\n";
}
int p(int n)
{
    for(int i=2;i<n/2;i++)
        if(n%i==0) return 0;
    return 1;
}
int nop()
{
    ll count=0;
    for(ll i=2;i<=1000;i++)
        if(p(i)) {count++;prime.push_back(i);}
    return count;
}