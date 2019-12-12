#include<iostream>
using namespace std;
void repeat();
long long int a[4];
int c0;
int main()
{
    int n=4;c0=0;
    long long min,max;
//    long long int a[4],min,max=-1;
    cin>>a[0];min=a[0];max=a[0];
    if(a[0]==0)c0++;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)c0++;
        if(min>a[i])min=a[i];
        if(max<a[i])max=a[i];
    }
    while(c0==1)
    {
        repeat();
    }
    min=0;max=0;
    for(int i=1;i<n;i++)
    {
        if(a[min]>a[i])min=i;
        if(a[max]<a[i])max=i;
    }
    max+=min*2;
    cout<<max<<"\n";
}
void repeat()
{
    int i0;
    for(int i=0;i<4;i++)
        if(a[i]==0)
            {i0=i;break;}
    for(int i=0;i<4 ;i++)
       if(i!=i0)
       a[i]--;
     a[i0]+=2;
     c0=0;
    for(int i=0;i<4;i++)
    {
        // cout<<a[i]<<" ";
        if(a[i]==0)c0++;
    }
    // cout<<endl;
}