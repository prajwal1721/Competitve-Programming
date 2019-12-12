#include<iostream>
using namespace std;
#define SWAP(x,y,t) t=x,x=y,y=t
int main()
{
    int n,x,t;
    int a[2][n];
    cin>>n>>x;
    for(int i=0;i<2;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++) 
            if(a[0][j]>a[0][j+1])
                {
                    SWAP(a[0][j],a[0][j+1],t);
                    SWAP(a[1][j],a[1][j+1],t);
                }   
    while(x>0)
    {
    for(int j=0;j<n && x;j++)
    {
            if(a[0][j]>a[1][j] )
                {a[1][j]++;x--;}
            // else
                // {a[1][j]++;x--;}
    }
    }
long double ta=0;
    for(int i=0;i<n;i++)
ta=ta+(long double)a[0][i]/a[1][i];
cout<<ta<<endl;

}
