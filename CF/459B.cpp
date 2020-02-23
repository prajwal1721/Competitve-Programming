#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    int t,cn,n;cin>>n;cn=n;
    vector<int> v;
    while (cn--)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int st=*v.begin(),ed=*v.rbegin(),c_st=0,c_ed=0;
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(st==*i)c_st++;
        if(ed==*i)c_ed++;
    }
    ll a=(ll)c_st*(ll)c_ed;
    if(st==ed)
    {
            a=((ll)c_st*(c_st-1))/2;
    }
    cout<<ed-st<<" "<<a<<"\n";
}