// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
ll n;
void solve()
{
    string s;cin>>s;
    n=s.length();ll d=0,f=0;
    for(int i=0;i<n;i++){if(s[i]!='a')d++;}
    if(d%2 ){cout<<":(\n";return ;}
    {
        f=0;
        for(int i=n-d/2,j=0;j<n-d/2 && i<n ; )
        {
            if(s[i]=='a'){f=1;break;}
            if(s[j]=='a')j++;
            else if(s[j]==s[i]){i++;j++;}
            else {f=1;break;}
        }
        if(!f)
            {for(int i=0;i<n-d/2;i++)cout<<s[i];cout<<"\n";}
    }
    if(f){cout<<":(\n";return ;}
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