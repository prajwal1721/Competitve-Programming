#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll a,b;cin>>a>>b;
    if(a*log(b)>b*log(a))cout<<"<\n";
    else if(a*log(b)<b*log(a))cout<<">\n";
    else cout<<"=\n";
}