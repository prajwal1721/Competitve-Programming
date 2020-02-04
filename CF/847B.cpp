#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n],i=0;
    while(n--)
    {
        cin>>a[i++];
    }
    n=i;
    a[i]=0;
    ll pre=0,count=0,j=0;i=0;
    for(;count!=n;)
    {

        if(a[i]==0)
        {

            a[j]=0;
            cout<<"\n";pre=0;
            i=0;j=0;
        }
        if(pre<a[i])
        {
            cout<<a[i]<<" ";
            pre=a[i];count++;
        }
        else 
        {
            a[j++]=a[i];
        }
        i++;
    }

}