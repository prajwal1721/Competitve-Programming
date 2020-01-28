#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,t,f=1;cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==1)f=0;
    }
    if(f==0) cout<<"HARD\n";
    else cout<< "EASY\n";
}