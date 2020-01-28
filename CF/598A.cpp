#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef signed long long ll;
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        ll sum=0,nc=n;n=(ll)log2(n);
        while(n!=-1)sum=sum-2*pow(2,n--);
        sum+=(nc*(nc+1))/2;        
        cout<<sum<<"\n";
    }
    

}