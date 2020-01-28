#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
void print(vector<ll> a,vector<ll>b);
int main()
{   
    ll n,t;
    cin>>n;
    vector<ll> a;
    while(n--)
    {cin>>t;a.push_back(t);}
    n=a.size()-1;
    vector<ll>b;
    while(n--)
    {cin>>t;b.push_back(t);}
    n=b.size()-1;
    vector<ll>c;
    while(n--)
    {cin>>t;c.push_back(t);}
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    sort(b.begin(),b.end());
    print(a,b);
    print(b,c);
}
void print(vector<ll> a,vector<ll>b)
{
 for(auto it=a.begin(),p=b.begin();it<a.end();)
    {
        if(*it==*p){it++;p++;}
        else{cout<<*it<<"\n";return;}
    }
}