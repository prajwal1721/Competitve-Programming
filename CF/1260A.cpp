#include<iostream>
#include<cmath>
using namespace std;
typedef int ll;
int main()
{
    ll n;cin>>n;
    while (n--)
    {
        ll a,b;cin>>a>>b;
        ll all=b/a,remain=b%a;
        cout<<all*all*(a-remain)+(all+1)*(all+1)*remain<<"\n";
    }
    
}