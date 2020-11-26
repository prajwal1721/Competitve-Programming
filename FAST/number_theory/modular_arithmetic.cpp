#include<iostream>
#include<cmath>
using namespace std;
#define mod 1000000007
int main(){
    int a=2232332,b=212221234;
    cout<<(a%mod+b%mod)%mod<<"\n";
    cout<<(a%mod-b%mod+mod)%mod<<"\n";
    cout<<(a%mod*b%mod)%mod<<"\n";
    // cout<<((a%mod)*(pow(b,-1)))%mod<<"\n";
}