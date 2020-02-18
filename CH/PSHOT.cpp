#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while (t--)
    {
        ll n;string s;
        cin>>n>>s;
        ll i,A1=0,B1=0,s1=n,s2=n,ans=2*n;
        for(i=0 ;i<s.length();i++)
        {
          if(i%2==0)
			{
				A1+=(s[i]-'0');s1--;
			}
			else
			{
				B1+=(s[i]-'0');s2--;
			}
			if(A1>B1+s2 || B1>A1+s1)
			{
				ans=i+1;
				break;
			}
        }
        cout<<ans<<"\n";
        /* code */
    }
    
}