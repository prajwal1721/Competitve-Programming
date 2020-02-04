#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll time=0,n,t;
    cin>>n;
    vector<ll>v;time=time+2*n-1;
    while(n--)
    {
        cin>>t;v.push_back(t);
    }
    ll pre_h=0;
    for (auto a = v.begin(); a <v.end() ; a++)
    {
        if(pre_h>*a){time+=pre_h-*a;pre_h=*a;}
        else {
            time+=*a-pre_h;pre_h=*a;
        }
    }
    cout<<time<<"\n";
    
}