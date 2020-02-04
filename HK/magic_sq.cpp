#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll row_s[3]={0},col_s[3]={0},dia[2]={0},a[3][3];ll n=3;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
            cin>>a[i][j];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
        {
            row_s[i]+=a[i][j];
            col_s[i]+=a[j][i];
        }
    for(ll i=0;i<n;i++)
    {
        dia[0]+=a[i][i];
        dia[1]+=a[i][n-i-1];
    }
}