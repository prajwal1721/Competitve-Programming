#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while (q--)
    {
        /* code */
    vector<ll> v;
        ll n,seat,exam,m_score;
        cin>>n>>seat>>exam>>m_score;
        while (n-->1)
        {
            ll sum=0,t;
            for(ll i=0;i<exam;i++){cin>>t;sum+=t;}
            v.push_back(sum);
        }
        ll  t,sum=0;
        for(int i=0;i<exam-1;i++){cin>>t;sum+=t;}
        sort(v.begin(),v.end(),greater<ll> ());
        ll need=v[seat-1]-sum+1;
        if(need>m_score) cout<<"Impossible\n";
        else cout<<need<<"\n";
    }

}