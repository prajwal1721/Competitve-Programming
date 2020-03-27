    #include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
            ll t;cin>>t;
            while (t--)
            {
                ll a,b;cin>>a>>b;
                cout<<((a%b)?b-(a%b):0)<<"\n";    
            }
}
            