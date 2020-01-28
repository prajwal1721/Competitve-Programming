#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<string>
typedef long long  ll;

using namespace std;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,i,sc,tot=0,a[8]={0};
        cin>>n;
        while(n--)
        {
            cin>>i>>sc;
            if(i<=8 && a[--i]<sc)a[i]=sc;
        }
        for(i=0;i<8;i++)
        {
            tot+=a[i];
        }
        cout<<tot<<"\n";
    }
} 