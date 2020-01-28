#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    cout<<((n%6==1||n%6==3||n%6==5)?"Ehab\n":"Mahmoud\n");
}