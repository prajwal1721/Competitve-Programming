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

void solve()
{
    string s1,s2;cin>>s1>>s2;   
    ll x1=s1[0]-'a',x2=s2[0]-'a',y2=s2[1]-'0',y1=s1[1]-'0';
    if(x1-x2 >= 0 ) 
    {
        if(y1-y2 >=0)
        {
            ll x=x1-x2,y=y1-y2;
            ll t=min(x,y);
            x-=t;y-=t;
            string ans;cout<<t+max(x,y)<<"\n";
            while(t--)
            {
                cout<<"LD\n";
            }
            if(x)while (x--)cout<<"L\n";
            else while (y--)cout<<"D\n";            
        }
        else
        {
            ll x=abs(x1-x2),y=abs(y1-y2);
            ll t=min(x,y);
            x-=t;y-=t;
            string ans;cout<<t+max(x,y)<<"\n";
            while(t--)
            {
                cout<<"LU\n";
            }
            if(x)while (x--)cout<<"L\n";
            else while (y--)cout<<"U\n";            
        }
    }
    else
    {

        if(y1-y2 >=0)
        {
            ll x=abs(x1-x2),y=abs(y1-y2);
            ll t=min(x,y);
            x-=t;y-=t;
            string ans;cout<<t+max(x,y)<<"\n";
            while(t--)
            {
                cout<<"RD\n";
            }
            if(x)while (x--)cout<<"R\n";
            else while (y--)cout<<"D\n";            
        }
        else
        {
            ll x=abs(x1-x2),y=abs(y1-y2);
            ll t=min(x,y);
            x-=t;y-=t;
            string ans;cout<<t+max(x,y)<<"\n";
            while(t--)
            {
                cout<<"RU\n";
            }
            if(x)while (x--)cout<<"R\n";
            else while (y--)cout<<"U\n";            
        }

    }
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