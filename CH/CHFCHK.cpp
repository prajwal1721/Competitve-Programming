#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    typedef long  l;
    int q;
    cin>>q;
    while(q--)
    {
        l t,n;
        cin>>n;
        vector<l> v;
        while(n--)
        {
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        cout<<*v.begin()<<"\n";
    }
}