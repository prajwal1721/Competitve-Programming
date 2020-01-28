#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
     long long p,count=0,n,k,no;
     cin>>n>>k;
     while(n--)
     {
         long t=0;
         cin>>no;
         if(no<pow(10,k)) count++;
        else 
        {
            while(no)
            {
                if(no%10==4 || no%10==7) t++;
                no=no/10;
            }
            if(t<=k) count++;
        }
     }
     cout<<count<<"\n";
}