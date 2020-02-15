#include <cmath> 
#include <iostream> 
#define ll long long
using namespace std;
ll maximumXOR(ll n, ll l, ll r) 
{ 
    ll x = 0; 
    for (ll i = log2(r); i >= 0; --i) { 
        if (n & (1 << i)) {
            if ((x > r) || (x + (1 << i) - 1 < l)) 
                x ^= (1 << i); 
        } 
        else {
            if ((x ^ (1 << i)) <= r) 
                x ^= (1 << i); 
        } 
    } 
    return n ^ x; 
} 

int main() 
{ 
    ll q;
    cin>>q;
    while(q--)
    {
    ll n, l, r ; 
        cin>>n>>l>>r;
    cout<<maximumXOR(n, l, r)<<endl; 
    }
    return 0; 
}