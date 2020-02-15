#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)  
{  
    if (a == 0)  
        return b;  
    return gcd(b % a, a);  
}  
ll ans(ll n)
{
    ll count=0;
    for(ll i=2;i<n;i++)
        if(gcd(i,n)==1)count++;

    return count+1;
}
int main()
{
    ll no,i=1;
    cin>>no;
    while (i<=no)
    {
        /* code */
        // ll n;cin>>n;
        cout<<ans(i)<<",";i++;
    }
    
}
