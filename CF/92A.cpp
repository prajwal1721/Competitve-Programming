#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,no;
    cin>>n>>no;
    ll tot=(n*(n+1))/2;
    no=no-(int)(no/tot)*tot;
    ll t=floor((-1+sqrt(1+8*no))/(2));
    no-=(t*(t+1))/2;
    cout<<no<<"\n";
    
}