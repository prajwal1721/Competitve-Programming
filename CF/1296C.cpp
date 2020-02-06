#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n;cin>>n;
        ll l=0,r=0,u=0,x=0,y=0,d=0,rl=0,lr=0,ud=0,du=0,m=n+1,st,ed;
        string s;cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='L'&& !rl){l=i;lr=1;}
            else if(s[i]=='R' && lr){ 
                if(m>abs(l-r) && y==0){st=l;ed=i;m=abs(l-r);}
               {lr=0;rl=1;y=0;}
            }
            else if(s[i]=='R'&& !lr){r=i;rl=1;}
            else if(s[i]=='L'&& rl)
             {
                 if(m>abs(l-r) && y==0){st=r;ed=i;m=abs(l-r);}
                {lr=1;rl=0;y=0;}
            }
            else if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
        }
///
//
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='U'&& !du){u=i;du=1;}
            else if(s[i]=='D' && ud){ 
                if(m>abs(u-d) && x==0){st=u;ed=i;m=abs(u-d);}
               {ud=0;du=1;x=0;}
            }
            else if(s[i]=='D'&& !ud){d=i;du=1;}
            else if(s[i]=='U'&& du)
             {
                 if(m>abs(u-d) && x==0){st=d;ed=i;m=abs(d-u);}
                {ud=1;du=0;x=0;}
            }
            else if(s[i]=='L')x++;
            else if(s[i]=='R')x--;
            if(ud)
             {
                 if(m>abs(u-d) && x==0){st=u;ed=i;m=abs(u-d);}
               {ud=0;du=1;x=0;}
             }
            cout<<u<<" "<<d<<"\n";
        }


        if(m<n)cout<<st+1<<" "<<ed+1<<"\n";
        else cout<<-1<<"\n";
    }
}