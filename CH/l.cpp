#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    for(int i=0;i<=n;i++)
        p=p^i;
    cout<<p;
}