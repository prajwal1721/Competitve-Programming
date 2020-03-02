#include<iostream>
using  namespace std;
void merge(int a[],int l,int mid,int h)
{
    int c[h-l+1];
    int st1=l,st2=mid+1,k=0;
    while (st1<=mid && st2<=h)      
    {
        if(a[st1]<a[st2]){c[k++]=a[st1++];}
        else c[k++]=a[st2++];
    }
    if(st1>mid)
    while (st2<=h)
        c[k++]=a[st2++];
    if(st2>h)
    while (st1<=mid)
        c[k++]=a[st1++];
    for(int i=l;i<=h;i++)
        a[i]=c[i-l];
}
void merge_sort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main()
{
    int a[]={7,6,15,4,32,2,1};
    merge_sort(a,0,6);
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
}