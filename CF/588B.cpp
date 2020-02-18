#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
typedef unsigned long long ll;
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
vector<ll> fact(vector<ll> v,ll n)
{
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(n%i==0){
            if(n/i==i)v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}
int main()
{
    vector<ll> v;
    ll n;cin>>n;
    vector<ll> ve = fact(v,n);
    sort(ve.begin(),ve.end());
    // set<ll> s(ve.begin(),ve.end());
    ll ans=1;
    if(isPrime(n))cout<<n<<'\n';
    else
    {
        for(auto i=ve.begin();i!=ve.end();i++)
    {
        if(isPrime(*i))
        {
            // cout<<*i<<" ";
            ans*=(*i);
        }
    }
    cout<<ans<<"\n";
    }

}

