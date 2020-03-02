#include<iostream>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
void selection(int a[],int n)
{   
    int t;
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i; j <n ; j++)
        {
            if(a[min]>a[j])min=j;
        }
        SWAP(a[min],a[i],t);
    }   
}

int main()
{
    int a[]={7,6,15,4,32,2,1};
    selection(a,7);
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
}
