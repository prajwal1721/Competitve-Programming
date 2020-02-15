#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
        if(a[i]>max)max=a[i];
        return max;
}
void sort(int a[],int n,int no)
{
    cout<<n<<"\n";
    int count[n+1]={0};

    for(int i=0;i<no;i++)
        count[a[i]]++;
    int final[no]   ;
   
    for(int i=1;i<=n;i++)
        count[i]+=count[i-1];
    for(int i=0;i<no;i++)
        {
            final[count[a[i]]-1]=a[i];
            count[a[i]]--;
        }
    for(int i=0;i<no;i++)
        a[i]=final[i];
    
}
int main()
{
    int a[]={5,4,2,2,2,2,12,7,1,65,32};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,max(a,n),n);

    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
}