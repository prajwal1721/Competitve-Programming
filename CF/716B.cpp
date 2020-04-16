// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    string s;cin>>s;ll n=s.length();
    ll a[26]={0},cnt=0;
    if(n>=26)
    {
        for(ll i=0;i<n;i++)
    {
        for(ll j=i;i+26<n && j<i+26;j++)
        {
            if(s[j]!='?'&& a[s[j]-'A']!=0)
            {
                    i=a[s[j]-'A'];
                    for(ll ip=0;ip<26;ip++)a[ip]=0;
                    a[s[j]-'A']=j+1;
                    continue;
            }
            else if(s[j]!='?')
            {
                    a[s[j]-'A']=j+1;
                    // cout<<s[j]<<" ";                
            } 
        }cnt=0;
        // cout<<"\n";
        for(ll j=i;i+26<n && j<i+26;j++)
        {
            if(s[j]=='?')
            {
                for(ll ii=0;ii<26;ii++)
                {
                    if(a[ii]==0)
                    {
                        
                        a[ii]=j+1;
                        s[j]=(char)(ii+'A');break;
                    }
                }
            }
            if(s[j]=='?'){i=j;break;cnt=-(j-i);}
            cnt++;
            
        }

        if(cnt>=26)
        {
            i+=26;
            for(ll p=i;p<n;p++)
            {
                if(s[p]=='?')
                s[p]='A';
            }
            i=n;
        }
        if(i+26>n && cnt<26){cnt=0;break;}
    }
    // cout<<cnt<<" ";
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='?')s[i]='A';
    }
    // if(cnt>=26)
    cout<<s<<"\n";
    // else
    cout<<"-1\n";
    }
    else cout<<"-1\n";
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        // {
            solve();
        // }


    return 0;
}