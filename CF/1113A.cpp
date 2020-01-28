#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,cap,fuel=0,cost=0,city=1;
    cin>>n>>cap;
        if(cap>=n-city)
        {
            cost+=((n-city))*city;
            fuel+=((n-city));
            city=n;
        }
        else
        {
            cost+=cap;
            fuel=cap;
        }
    while(city!=n)
    {
        if(n-city<=fuel)
        {
            break;
        }
        if(fuel>=n-city)
        {
            cost+=(fuel-(n-city))*city;
            fuel+=(fuel-(n-city));
            city=n;
        }
        else
        {
            city++;
            fuel--;
            cost+=(cap-fuel)*city;
            fuel+=(cap-fuel);
        }    

    }
        cout<<cost<<"\n";
}


