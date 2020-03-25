    #include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gets(ll a)
{
    int s=0;
    while (a)
    {s+=a%10;a/=10;}
    return s;
}
int main()
{
            cin.tie(nullptr);   
            ios::sync_with_stdio(false);
            ll n;cin>>n;
            ll d=sqrtl(n);
            for(int i=1;i<100;i++)
            {
                ll ans=d*d+gets(d)*d;
                if(ans==n){cout<<d<<"\n";return 0;}
                else d--;
            }
            cout<<"-1\n";
}