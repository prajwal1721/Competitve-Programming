#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    map <string,ll> s;
    while(n--)
    {
        string t;
        cin>>t;
        // cout<<t<<" ";
        if(s.find(t)==s.end())
        {
            cout<<"OK\n";
            s.insert(pair<string,ll>(t,0));
        }
        else
        {
                    s.find(t)->second=s.find(t)->second+1;
                    cout<<t<<to_string(s.find(t)->second)<<"\n";
                    // s.(pair<string,ll> (t,p));

        }
    }
}   

