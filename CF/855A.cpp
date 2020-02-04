#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;cin>>n;string s;
    vector<string>v;
    while(n--)
    {
        cin>>s;
        if(find(v.begin(),v.end(),s)!=v.end()){cout<<"YES\n";}
        else {cout<<"NO\n";v.push_back(s);}
    }
}