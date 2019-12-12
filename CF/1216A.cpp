#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll i=0,count=0,ca=0,cb=0;
    for(int p=1;p<s.length();p+=2)
    {
                if((s[p]-s[p-1])==0) {s[p-1]='a'+'b'-s[p-1];count++;}
    }
    cout<<count<<'\n'<<s<<'\n';
}