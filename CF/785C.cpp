        #include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
            ll n,m;cin>>n>>m;n--;
            ll ans=1;
            ll b=1-2*m,c=2*(n-m);
            ans=ceill((-b+sqrtl(b*b+4*c))/2.0);
            if(ans*ans+(1-2*m)*ans==c)ans--;
            cout<<ans+1<<"\n";
}