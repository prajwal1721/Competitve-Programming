#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int q,p=1;cin>>q;
    while (q--)
    {
        ll t, cn,n,k;cin>>n>>k;cn=n;
        vector<ll>v;
        while (n--)
        {
            cin>>t;v.push_back(t);
        }
        vector<ll>v1;
        priority_queue<ll>diff;
        for(auto i=v.begin();i!=v.end()-1;i++)
            {
                diff.push(*(i+1)-*i);
            }
        while (k)
        {
            auto t3=diff.top();diff.pop();
            if(t3==1)break;
            diff.push(ceil((float)t3/2));
            diff.push(floor((float)t3/2));k--;
        }
        cout<<"Case #"<<p<<": ";
        cout<<diff.top()<<"\n";p++;
    }
    
}   