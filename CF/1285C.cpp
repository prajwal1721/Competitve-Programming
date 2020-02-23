#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int n,a=1,b=1;cin>>n;
    vector<pair<int,int>>v;
    for(int i=1;i*i<n;i++)
    {
        if(n%i==0)
            {a=i;b=(n/i);v.push_back(pair<int,int>(a,b));}
    }
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(lcm((*i).first,(*i).second)==n){a=(*i).first;b=(*i).second;}
    }
    cout<<a<<" "<<b<<"\n";
}