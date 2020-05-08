    // link:
    // [prajwal1721]
    // g++ -Wall -Wextra -Wshadow filename.cpp
    /*comments:
    */



    #include<bits/stdc++.h>
    using namespace std; 
    #define mod 1000000007
    #define gcd(a,b) __gcd(a,b)
    #define lcm(a,b) (a*b)/gcd(a,b)
    #define bits(x) __builtin_popcountll(x)


    typedef long long int ll;
    void solve()
    {
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        int freq[100]={0};
        string ans[k+1]={""};
        for(ll i=0;i<n;i++)freq[s[i]-'a']++;

    ll cnt=0,cur=0,f=1;

        while(cur<26 && freq[cur]==0)cur++;
        ll first=cur;
        for(int i=0;i<k && cur<26;)
        {
            while(cur<26 && freq[cur]==0)cur++;
            ans[i]+=(char)('a'+cur);freq[cur]--;
            // cout<<freq[cur]<<" "<<cur<<"\n";
            if(cur<26 && i==k-1 && cur==first && freq[cur]>0)i=0;
            else  i++;
        }

        for(int i=0;i<26;i++)
            {
                if(freq[i]>=k)
                {int p=0;
                    while(p<freq[i]/k)
                    {ans[0]+=(char)('a'+i);p++;}
                    freq[i]%=k;
                }
                else if(freq[i]>0)
                {
                    while(freq[i]>0)
                    {ans[0]+=(char)('a'+i);freq[i]--;}
                }
            }
        sort(ans,ans+k,greater<string>());
        // for(int i=0;i<n;i++)
            // cout<<ans[i]<<" ";

        cout<<ans[0]<<"\n";
    }

    int main()
    { 
        // ios::sync_with_stdio(false);
        // cin.tie(nullptr);
        ll t;cin>>t;
        // cout<<t<<"Hi test complete\n";
        while(t--)
            {
                solve();
            }


        return 0;
    }