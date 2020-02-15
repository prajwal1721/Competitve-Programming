#include<iostream>
#include<vector>
#define SWAP(x,y,t) (t)=(y),(y)=(x),(x)=(t)
using namespace std;
typedef long long ll;
vector<ll> sort(vector<ll> v)
{
    ll n=v.size(),t;
    for(auto i=v.begin();i!=v.end()-1;i++)
    {
        auto min=i;
        for(auto j=v.begin();j!=v.end();j++)
        {
            if(*j<*(i))min=j;
        }
        SWAP(*min,*(i),t);
    }
    return v;
}
int main()
{
    vector <ll > v={5,4,2,7,1,65,32};
    v=sort(v);
    for ( auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
}