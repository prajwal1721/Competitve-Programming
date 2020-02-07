#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll m,n,k,t;
        vector<ll> v;
        cin>>n>>m>>k;
        while(n--)
        {
            cin>>t;v.push_back(t);
        }
        auto i=v.begin();
        for(i=v.begin();i!=v.end()-1;i++)
        {
            if(*i>*(i+1)){m+=abs(*i-*(i+1))+min(abs(k),*(i+1));}
            else if(*(i+1)-*i<=k ){m+=min(k-*(i+1)+*i,*(i));} 
            else if(k-*(i+1)+*i<=m )m+=k-*(i+1)+*i;
            else break;
            if(m<0)break;
            // cout<<*i<<"::"<<*(i+1)<<" "<<m<<'\n';
        }
        if(i==v.end()-1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
