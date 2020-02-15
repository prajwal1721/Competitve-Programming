#include<iostream>
#include<cmath>
using namespace std;
int max(int a[],int n)
{
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
        if(a[i]>max)max=a[i];
        return max;
}
void sort(int a[],int max,int n)
{
    int ans[(int)ceil(max/10)][n]={0},c[(int)ceil(max/10)]={0};
    for(int i=0;i<n;i++)
    {

    }
}
int main()
{
    int a[]={5,4,2,2,2,2,12,7,1,65,32};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,max(a,n),n);

    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
}