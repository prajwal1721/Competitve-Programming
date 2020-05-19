// link:https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/lexicographically-minimal-string-6edc1406/description/
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
int par[26]={0};
int find(int a)
{
    if(a==par[a])return a;
    return par[a]=find(par[a]);
}
void uni(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)return;
    if(a>b){int t=a;a=b;b=t;}
    par[b]=a;
}
void solve()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=0;i<26;i++)par[i]=i;
    for(int i=0;i<s1.length();i++)
    {
        uni(s1[i]-'a',s2[i]-'a');
    }

    // for(int i=0;i<26;i++)cout<<par[i]<<" ";cout<<"\n";
    string ans="";
    
    for(int i=0;i<s3.length();i++)
    {
        ans+=(char)(find(s3[i]-'a')+'a');
    }

    cout<<ans<<"\n";

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