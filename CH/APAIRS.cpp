#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main(){
    typedef long long ll;
    vector <char> na,nb;
    string a,ca,b;
    ll la,lb,cla;
    cin>>a>>b;
    ca=a;
    la=a.length();
    lb=b.length();
    ll i=0;
    cla=la;
    if(la>lb)
    {
        while(la-lb)
        {
            b.insert(0,"0");lb++;
        }
    }
    else    if(la<lb)
    {
        while(la-lb)
        {
            a.insert(0,"0");la++;
        }
    }
    sort(nb.begin(),nb.end());
    sort(na.begin(),na.end());
    ll ne=0;
    string s=" ";
    if(la>lb)
    {
    
    ll p=stoi(a);
    while(p)
        {
                ll r=p%10;
                vector <char>::iterator l=find(na.begin(),na.end(),r);
                s.insert(0,to_string(nb[distance(na.begin(),l)]));
                p/=10;
        }
    }
    else
    {
    ll p=stoi(b);
    while(p)
        {
                ll r=p%10;
                vector <char>::iterator l=find(nb.begin(),nb.end(),r);
                s.insert(0,to_string(na[distance(nb.begin(),l)]));
                p/=10;
        }
    }
    ll pp=la-cla;
    if(pp-->0)
    {
        cout<<0;
    }
    cout<<ca;
    // pp=la-cla;
    // cout<<" ";
    // if(pp--)
    // {
    //     cout<<0;
    // }
    cout<<s<<"\n";
}