#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll t,n,n_0=0,n_1=0,count=0,n_11=0;
        cin>>n;
        while(n--)
        {
            cin>>t;
            if(t==1 ) n_1++;
            else if(t==0) n_0++;
            else if(t==-1) n_11++;
            else count++;
        }
            if(count>1 || !n_1 && n_11>1 || n_11 && count )
            cout<<"no\n";
            else 
            cout<<"yes\n";
        }
    }