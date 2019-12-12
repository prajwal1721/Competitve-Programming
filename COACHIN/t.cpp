#include<iostream>
#include<cmath>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
    typedef long long ll;
ll commDiv(ll a,ll b) ;
ll gcd(ll a, ll b) ;
int main()
{
    ll n,m,t,c=0;
    cin>>n>>m;
    cout<<commDiv(n,m)<<'\n';
}
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
// Function to calculate all common divisors 
// of two given numbers 
// a, b --> input lleger numbers 
ll commDiv(ll a,ll b) 
{ 
    // find gcd of a,b 
    ll n = gcd(a, b); 
  
    // Count divisors of n. 
    ll result = 0; 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        // if 'i' is factor of n 
        if (n%i==0) 
        { 
            // check if divisors are equal 
            if (n/i == i) 
                result += 1; 
            else
                result += 2; 
        } 
    } 
    return result; 
}