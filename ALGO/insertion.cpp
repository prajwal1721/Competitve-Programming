#include<iostream>
using namespace std;
void insertion (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i-1,key=a[i];
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];j--;
        }
        a[j+1]=key;
    }
    }
int main()
{
    int a[]={7,6,15,4,32,2,1};
    insertion(a,7);
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
}
