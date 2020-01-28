#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,m,i=0,count=0,t;
    cin>>n>>m;
    ll  toy[1000],bill[1000];
    while(i<n){cin>>toy[i++];}
    i=0;
    while(i<m){cin>>bill[i++];}
    ll a=0; 
        for(ll aa=0;aa<n;aa++)
        {
            if(bill[a]>toy[aa] && a<m){
                count++;
                if(aa==a)a++;
                else a=aa;}
        }
    cout<<count<<"\n";
}