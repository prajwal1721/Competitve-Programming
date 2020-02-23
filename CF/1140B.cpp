 #include<iostream>
 using namespace std;
 typedef long long ll;
 int main()
 {
    ios::sync_with_stdio(false); cin.tie(nullptr);
     ll q;cin>>q;
    while (q--)
    {
        ll n,o1=0,o2=0,p=0;string s;cin>>n>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='<')o1++;
            else break;
        }
        for(ll i=n-1;i<n>=0;i--)
        {
            if(s[i]=='>')o2++;
            else break;
        }
        ll ans=0;
        if(o1!=n || o2!=n)ans=min(o1,o2);
        cout<<ans<<"\n";
    }

    
 }