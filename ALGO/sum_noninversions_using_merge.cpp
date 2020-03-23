#include<iostream>
using namespace std;int sum2=0;
int merge(int a[],int l,int m,int h,int *sum)
{
    int c[h-l+1];
    int s1=l,s2=m+1,k=0;int c1=0;
    while (s1<=m&& s2<=h)
    {
        if(a[s1]>a[s2])
        {
            c[k++]=a[s2++];
            sum2+=a[s1];
        }
        else
        {
            c[k++]=a[s2++];
        }    
    }
    while (s1<=m)
    {
        c[k++]=a[s1];
        if(c1>0)
            // {sum2+=a[s1];cout<<a[s1]<<" ";}
        s1++;
        c1++;
    }
    while (s2<=h)
    {
        c[k++]=a[s2++];
    }
    k=0;
    for(int j=l;j<=h;j++,k++)
    {
        a[j]=c[k];
    }
}
void mergesort(int a[],int l,int h,int*sum)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(a,l,mid,sum);
        mergesort(a,mid+1,h,sum);
        merge(a,l,mid,h,sum);
    }
}
int main()
{
    int j=0,cn,n;cin>>n;cn=n;
    int a[n];
    int sum1=0;
    while(cn--)
    {
        cin>>a[j];sum1+=a[j++];
    }
    int sum=0,h=0;
    for(int k=n-1;h<n&&k>=0;h++,k--)
        sum+=a[h]*(k);
    mergesort(a,0,n-1,&sum);
    cout<<sum2<<" ";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<sum-sum2<<"\n";
}