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
                ll st=1;ll n,k;cin>>n>>k;
                st=ceil((-1.0+sqrt(1+8*k))/2.0);
                ll ed =k-(st*(st-1))/2;
                char ch[100000];
                for(int i=0;i<n;i++)
                    ch[i]='a';
                ch[n- ed]='b';ch[n-st-1]='b' ;
                for(int i=0;i<n;i++)
                    cout<<ch[i];
                cout<<"\n";
            }
}
            