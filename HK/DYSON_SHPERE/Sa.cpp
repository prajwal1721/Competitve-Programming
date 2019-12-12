#include<iostream>
#include<cmath>
#define COMP(x,y) (x>y)?1:0
int mul(long long int n);
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);    
    long int c=0;
    while(n!=1)
    {
        if(n&1)
              {
                  if(n==3)
                      n--;  
                  else  if(COMP(mul(n-1),mul(n+1)))
                    {
                    // printf("n:%lld-1=%lld\n",n,n-1);
                    n--;
                    }
                    else
                    {
                    // printf("n:%lld+1=%lld\n",n,n+1);
                    n++;
                    }
              }
        else
            {
                // printf(":n:%lld/2=%lld\n",n,n/2);
                n=n/2;
            }
        c++;
    }
    cout<<c<<'\n';
}
int mul(long long int n)
{
    int p=ceil(log2(n));
    for(int i=p;i>0;i--)
        {
            long int r=pow(2,i);
        if(n%r==0)
        {
            // cout<<r<<" "<<n<<"\n";
            return r;
        }
        }   
    return 0;
}
