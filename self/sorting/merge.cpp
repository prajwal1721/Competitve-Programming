#include<iostream>
using namespace std;
void merge(int a[],int st,int mid,int ed)
{
    int l[100],m[100],j;
    int sl=mid-st+1;
    for(int i=0;i<sl;i++ )
        l[i]=a[i+st];
    int i=0,sm=ed-mid;j=st;
    j=mid+1;
    for(i=0;i<sm;i++)
        m[i]=a[i+mid+1];
        int k=st;
        i=0,j=0;
    while(i<sl && j<sm)
    {
        if(l[i]>m[j])a[k++]=m[j++];
        else a[k++]=l[i++];
    }
    while(i<sl )a[k++]=l[i++];
    while(i<sm )a[k++]=m[j++];
}
void sort(int a[],int st,int ed)
{
    if(st<ed)
    {int mid=(st+ed-1)/2;
    sort(a,st,mid);
    sort(a,mid+1,ed);
    merge(a,st,mid,ed);
    }
}
int main()
{
    int a[]={5,4,2,7,1,65,32};
    sort(a,0,7);
    for(int i=0;i<7;i++)cout<<a[i]<<" ";
    cout<<"\n";
}