#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        long long int n,k,d,aa;
        long long int a[1000]={0};
        cin>>n>>k>>d;
        int count =0,sq=0;
        for(int i=0;i<n;i++)
        {
            cin>>aa;
            if(sq==0)
            {
                a[aa-1]++;
                sq=aa;count ++;
            }
            else if(sq!=0)
            {
                a[aa-1]++;
                sq                
            }

        }        
    }
    
}
// use mappings