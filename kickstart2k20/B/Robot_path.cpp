    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define c 1000000000
    #define mod 1000000007
    string s;
    ll x=1,y=1;
    stack <ll> sk;
    void inc(ll i,ll no)
    {
        for(ll ii=0;ii<no;ii++)
        {
            if(s[i]=='N')y=(y-1)%c;
            else if(s[i]=='S')y=(y+1)%c;
            else if(s[i]=='E')x=(x+1)%c;
            else x=(x-1)%c;
            if(x==0)x=x+c;
            if(y==0)y=y+c;
        }
        // cout<<x<<" "<<y<<"\n";
    }    
    void solve()
    {
        cin>>s;
        sk.push(1);
        string ans="";
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                    sk.push((sk.top()*(s[i]-'0'))%mod);i++;
            }
            else if(s[i]==')')sk.pop();
            else inc(i,sk.top());
        }

        cout<<x<<" "<<y;
        x=1;y=1;
    }

    int main()
    {
                    cin.tie(nullptr);
                ios::sync_with_stdio(false);
        ll t,i=1;cin>>t;while (t--)
        {
            cout<<"Case #"<<i<<": ";
            solve();i++;
            cout<<"\n";
        }
        
    }