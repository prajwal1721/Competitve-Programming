//time limit  use 600Bp
#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n1,n2;
    ll a[1000000]; 
    map<ll,ll>m,m1;
    vector<ll>v1,v2;
    cin>>n1>>n2;
    ll cn1=n1,cn2=n2;
    ll i=1;
    while(n1--)
    {   
        cin>>t;
        v1.push_back(t);
        m1[t]=i++;
    }
    i=0;
    while(n2--)
    {   
        cin>>a[i];
        v2.push_back(a[i++]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(auto ip=v2.begin();ip<v2.end();ip++)
    {
        ll count=0;
        auto it=v1.begin();
            while(*it<=*ip && it!=v1.end()){count++;it++;}
        m[*ip]=count;
    }
    for(i=0;i<cn2;i++)
    {
        cout<<m[a[i]]<<" ";
    }
    cout<<"\n";
}