#include <iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll fact(ll a)
{
    ll p=1;
    for( ll i=2;i<=a;i++)
        p*=i;
        if(a<2) p=1;
        return p;
}
ll per(ll a ,ll b)
{
    ll p=1;
    for(ll i=b+1;i<=a;i++)
        p*=i;
    return p;
}
int main()
{
    {
        string s1,s2;
        cin>>s1>>s2;
        ll bal1=0,bal2=0;
        ll cur1=0,cur2=0,qmark=0;
        for(ll i=0;i<s1.length();i++)
        {
            if(s1[i]=='+')
                bal1++;
            else bal2++;
            if(s2[i]=='+')cur1++;
            else if(s2[i]=='-')cur2++;
            else qmark++;
        }
        if(abs(bal1-bal2-cur1+cur2)>qmark)printf("%0.12lf",(double)0);
        else
        {
            cur1=bal1-cur1;cur2=bal2-cur2;
            if(!((qmark-abs(cur1-cur2))&1))
                printf("%0.12lf",(double)per(qmark,max(cur1,cur2))/fact(min(cur1,cur2))/pow(2,qmark));
            else 
                printf("%0.12lf",(double)0);
        }
        
 
        
    }
    return 0;
}