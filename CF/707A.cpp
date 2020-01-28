#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,m;
    cin>>n>>m;
    n=m=m*n;
    char ch;
    ll color=0,not_color=0;
    while(m--)
    {
        cin>>ch;
        if(ch=='W' || ch=='B'|| ch=='G')
            not_color++;
        else
            color++;
    }
    if(color>0)cout<<"#Color\n";
    else cout<<"#Black&White\n";
}