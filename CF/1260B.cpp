#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,t;
        cin>>a>>b;
        if(a<b){t=a;a=b;b=t;}
        if(b*2>=a && (a+b)%3==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
