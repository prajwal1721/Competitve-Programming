#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,p=0;
        cin>>a>>b;
        ll st=((ll)a/10)*10,s=a%10;
        ll e=b%10,end=((ll)b/10)*10;
        if(s==9)p--;
        else if(s>=3)p-=2;
        else if(s>=2)p-=3;
        if(e<2); 
        else if(e==2)p++;
        else if(e<9)p+=2;
        else if(e==9)p+=3;
        cout<<((ll)(end-st)/10)*3+p<<"\n";
    }
}

