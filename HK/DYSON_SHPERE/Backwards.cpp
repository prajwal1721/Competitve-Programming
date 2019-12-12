#include<iostream>
using namespace std;
#define SWAP(x,y,t) t=x,x=y,y=t
int main()
{
   long long int t,n,i1=-1,i2=-1;
    long long int a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0 && i1==-1)
            i1=i;
        else if(a[i]%2==1 && i1!=-1)
           { 
               for(int k=0;k<=(i-i1-1)/2;k++)
                    SWAP(a[k+i1],a[i-k-1],t);   
                i1=-1;
           }
        else if(i==n-1 && i1!=-1)
           { 
               for(int k=0;k<=(i-i1-1)/2;k++)
                    SWAP(a[k+i1],a[i-k],t);   
                i1=-1;
           }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<'\n';
}