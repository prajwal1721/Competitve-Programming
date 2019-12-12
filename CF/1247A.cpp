#include<iostream>
#include<cmath>
using namespace std;
#define SWAP(x,y,t) t=x,x=y,y=t
int main()
{
    long long a,b,t;
    cin>>a>>b;
    // if(a<b) SWAP(a,b,t);
    if(b==1 && a==9)
    {
        a=a*10+9;
        b=b*100;
        cout<<a<<" "<<b;    
    }
    else if(b==a  )
        {
            b=b*10+1;
            a=a*10;
            cout<<a<<" "<<b;
        }
    else if((b-a)==1)
    {
        b=b*10;
        a=a*10+9;
        cout<<a<<" "<<b;
    }
    else 
    {
        cout<<-1;
    }
}