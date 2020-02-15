/*
time complexity:
                best=n (because of using  swapped)
                average=n^2
                worst=n^2
space complexity:
                worst =1
*/


#include<iostream>
#include<vector>
#define SWAP(x,y,t) (t)=(y),(y)=(x),(x)=(t)
using namespace std;
typedef long long ll;
vector<ll> sort(vector<ll> v)
{
    bool swapped=false;
    ll n=v.size(),t;
    for(auto i=v.begin();i!=v.end()-1;i++)
    {
        for(auto j=v.begin();j!=v.end()-1;j++)
        {
            if(*j>*(j+1)){SWAP(*j,*(j+1),t);swapped=true;}

        }
        if(swapped==false)break;
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