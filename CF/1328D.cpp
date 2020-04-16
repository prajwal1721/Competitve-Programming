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
                vector<ll>v;
                set<ll>s;
                ll n,cn,t;cin>>n;cn=n;while (cn--)
                {
                    cin>>t;v.push_back(t);
                    s.insert(t);
                }
                if(n==0)cout<<0<<"\n";
                else if(s.size()==1)
                {
                    cout<<1<<"\n";
                    for(ll i=0;i<n;i++)
                        cout<<1<<" ";
                    cout<<"\n";
                }
                else if(n%2==0)
                {
                    cout<<2<<"\n";
                    for(ll i=0;i<n;i+=2)
                        cout<<1<<" "<<2<<" ";
                    cout<<"\n";
                }
                else 
                {
                    ll fh=0;
                    for(ll i=0;i<n;i++)
                    {
                        if(v[i]==v[(i+1)%n]){fh=1;break;}
                    }
                    if(fh)
                    {
                        ll i=1,pre=1,color=2,f=1;vector<ll> ans;ans.push_back(1);
                    if(n>=2 && v[0]==v[1]){f=0;ans.push_back(pre);i++;}
                    for(;i<n;i++)
                    {
                        if( v[i-1]==v[i]&& f){ans.push_back(pre);ans.push_back(pre);f=0;}
                        else if(pre==1){ans.push_back(2);pre=2;}
                        else {ans.push_back(1);pre=1;}
                    }
                                        cout<<color<<"\n";
                    for(ll i=0;i<n;i++)
                        cout<<ans[i]<<" ";
                    cout<<"\n";
                    }
                    else 
                    {
                        ll color=3;
                        cout<<3<<"\n";
                        for(ll i=0;i<n-1;i+=2)
                            cout<<1<<" "<<2<<" ";
                        cout<<3<<"\n";
                    }
                }
            }
}