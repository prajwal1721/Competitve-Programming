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
        ll n,i=0,tot=0;
        cin>>n;
        while(i<n/2)
        {
            tot+=((long)((n-2*i)*(n-2*i)));i++;
        }
        if(n%2)tot++;
        cout<<tot<<"\n";
    }
}