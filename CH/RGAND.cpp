#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>k>>n;
        ll ans =0,sum=k;
        while(k<=pow(2,(ll)log2(k)+1))
        {
            sum=(sum)&(k);
            ans+=sum;k++;
            ans%=1000000007;
        }
        cout<<ans<<"\n";
    }
}