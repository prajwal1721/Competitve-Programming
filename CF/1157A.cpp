#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t=0,count=0;
    cin>>n;
    if(n==1) count--;
    do
    {
        // if(n==1) break;
        count++;
        n++;
        while(n%10==0)
            n=n/10;
    }while(n!=1);
    if(n==1) count++;
    cout<<count<<'\n';
}