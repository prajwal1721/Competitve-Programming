#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n,x=0,y=0;cin>>n;
        string s;cin>>s;
        int cx=0,cy=0;
        // for(int i=0;i<3000;i++){cy[i]=cx[i]=0;}
        for(int i=0;i<n;i++)
        {
            // cout<<x<<" "<<y<<"\n";
            if(s[i]=='R' && !cx){x++;cx=1;cy=0;}
            else if(s[i]=='L' && !cx){x--;cx=1;cy=0;}
            else if(s[i]=='U' && !cy){y++;cy=1;cx=0;}
            else if(s[i]=='D' && !cy){y--;cy=1;cx=0;}
        }
        cout<<x<<" "<<y<<"\n";
    }
}