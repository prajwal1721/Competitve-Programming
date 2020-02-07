#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,t;
    vector<ll> boy,girl;
    cin>>n;
    while (n--)
    {
        cin>>t;boy.push_back(t);
    }
        cin>>m;
    while (m--)
    {
        cin>>t;girl.push_back(t);
    }
    ll count=0;
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    auto i=boy.begin(),j=girl.begin();
    while(i!=boy.end() && j!=girl.end())
    {
        if(*i==*j || abs(*i-*j)==1){count++;i++;j++;}
        else if(*i>*j)j++;
        else i++;
    }
    cout<<count<<"\n";
}