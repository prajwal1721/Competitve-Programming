#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int st=0,ed=n;
    while(st<=ed){
        int m=st+(ed-st)/2;
        if((m*m )==n){cout<<m<<"\n";return 0;}
        if((m*m)>n)ed=m-1;
        else st=m+1;
    }
    cout<<"-1\n";
    return 0;
}