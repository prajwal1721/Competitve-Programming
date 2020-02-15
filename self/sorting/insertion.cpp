#include<iostream>
#include<vector>
#define SWAP(x,y,t) (t)=(y),(y)=(x),(x)=(t)
using namespace std;
typedef long long ll;
vector<ll> sort(vector<ll> v)
{
    ll n=v.size(),t;
    for(auto i=v.begin();i!=v.end();i++)
    {
        auto j=i-1;
        ll key=*i;
        while(j>=v.begin() && *j>key  )
        {
            *(j+1)=*(j);j--;
        }
        *(j+1)=key;
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