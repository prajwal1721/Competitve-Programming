#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,l=1,curr=0;
    cin>>n;
    string s;
    cin>>s;
    while(curr<n)
    {
        cout<<s[curr];
        curr+=l++;
    }
    cout<<"\n";
}