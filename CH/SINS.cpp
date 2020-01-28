#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll m,b;
        cin>>m>>b;
        while(m!=b && m && b)
        {
            if(m>b)
                { if(m%b)
                    m=m%b;
                  else
                    m=b;
                }
            else if(b>m)
            {
                if(b%m)
                    b=b%m;
                else 
                    b=m;
            }
        }
        cout<<m+b<<"\n";
        }
}