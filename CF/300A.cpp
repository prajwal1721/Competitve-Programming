#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;
    vector<ll> a,s1,s2,s3;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t>0)
            s2.push_back(t);
        else if(t<0)
            s1.push_back(t);
        else
            s3.push_back(t);
    }
    if(s1.size()%2==0 )
    {
        s3.push_back(*(--s1.end()));
        s1.pop_back();
    }
    if(s2.size()==0)
    {
        s2.push_back(*(--s1.end()));
        s1.pop_back(); 
        s2.push_back(*(--s1.end()));
        s1.pop_back();
    }
    cout<<s1.size()<<" ";
    for(auto i=s1.begin();i!=s1.end();i++)
        cout<<*i<<" ";
    cout<<'\n'<<s2.size()<<" ";
    for(auto i=s2.begin();i!=s2.end();i++)
        cout<<*i<<" ";
    cout<<'\n'<<s3.size()<<" ";
    for(auto i=s3.begin();i!=s3.end();i++)
        cout<<*i<<" ";
        cout<<"\n";
}