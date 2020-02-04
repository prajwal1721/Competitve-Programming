#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;cin>>n;
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        if(x%2==y%2 && (x-y==0 || x-y==2))
        {
            if(y%2==0)
            {
                if(x==y)cout<<y*2<<"\n";
                else cout<<y*2+2<<"\n";
            }
            else 
            {
                if(x==y)cout<<y*2-1<<"\n";
                else cout<<y*2+1<<"\n";
            }
        }
        else cout<<"No Number\n";
    }
}