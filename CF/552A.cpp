#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,ans=0;
    cin>>n;
    while(n--)
    {
        ll s1,s2,l1,l2;
        cin>>s1>>l1>>s2>>l2;
        ans+=(abs(s1-s2)+1)*(abs(l1-l2)+1);
    }
    cout<<(105>>1)<<" "   ;
    cout<<(105>>2)<<" "   ;
    cout<<(105>>3)<<" "   ;


    cout<<ans<<"\n";
}