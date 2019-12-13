#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,after ,before;
    cin>>n>>before>>after;
    vector <ll> day;
    ll p;
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    for(ll i=0;i<n;i++)
    {
        cin>>p;
        day.push_back(p);
    }
    ll c_a,c_b;
    vector <ll>::iterator i;
    for(*i=day.at(before);i<day.end();i++)
    {
        c_b=c_a=0;
        for(auto l=i-before;l<i;i++)
        {
            if(*i<*l){c_b++;}
        }
        cout<<c_b<<" :: "<<*i<<'\t';
        vector <ll>::iterator l;
        if(c_b==before)
        for(l=i;l<*i+day.end() && l<day.end();i++)
        {
            if(*i<*l){c_a++;}
        }
        if(c_a==after || l!=day.end())
        {
            cout<<i-day.begin();
        }
    }
}

