#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    string s="";
        cin>>n;
    for(int i=1;i<1000;i++)
        s.append(to_string(i));
        cout<<s[n-1 ]<<'\n';
}