#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll cn,n,i=0,ans=0,sum=0;
        cin>>n;
        ll a[200000],b[200000];cn=n;
        while(n--)
            {
                cin>>a[i];sum+=a[i++];
            }
            
        for(i=1;i<=cn;i++)
        {
            ll j=0;
            ll temp=a[i-1],Csum=sum-a[i-1];
            ll st=0,ed=cn-1,s1=0,tsum=0;
            while(Csum>tsum)
            {
                if(st!=i-1)
                {
                    tsum+=a[st];
                    Csum-=a[st];
                }
                st++;
            }
            // cout<<Csum<<" "<<tsum<<" ::"<<st<<"{}"<<ans<<"\n";
            if(Csum==tsum)
                ans++;
            if(st==i-1  && Csum==tsum){ans++;}
        }
        cout<<ans<<"\n";
    }
}