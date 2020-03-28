// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t=1,n,m=0;cin>>n;
        for(int i=1;i<=n;i++){m+=t*2;t*=2;}
        cout<<m<<"\n";
}