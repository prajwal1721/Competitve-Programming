#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    typedef long long ll;
    ll k,n,p;
    cin>>k;
    vector<ll> a;
    for(int i=0;i<26;i++)
        {
            cin>>p;
            a.push_back(p);
        }
     ll sum=0,l=s.length();
     for(int i=0;i<s.length();i++)
        sum+=a[s[i]-'a']*(i+1);
    sort(a.rbegin(),a.rend());
    ll count=0,j=0;
`    for(int i=0;i<k;i++)
    {
        count++;
        sum+=a[j]*(++l);
        if(count==1000) {count=0;j++;}

    }
    cout<<sum<<'\n';
}
