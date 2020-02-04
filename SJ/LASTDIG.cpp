#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    while(n--)
    {
        ll a, b;
        cin>>a>>b;
        ll na[10][4]={{0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
        if(b>1 )
        cout<<na[a%10][b%4]<<"\n";
        else if(b==1)cout<<a%10<<"\n";
        else cout<<"1\n";
    }
}