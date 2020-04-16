// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp


//code not unsterdtood 
// dp 

#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
typedef long long int ll;
int dp[1000009],c[1000009],m=0,cnt=1;
void solve()
{
    ll j=0;
    string s;
    cin>>s;int sz=s.size();
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='(')c[++j]=i;
        else if(j)
        {
            dp[i]=i-c[j]+1+dp[c[j]-1];
            j--;
            if(dp[i]==m)cnt++;
            if(dp[i]>m)
            {
                m=dp[i];
                cnt=1;
            }
        }
    }
    cout<<m<<" "<<cnt<<endl;
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}