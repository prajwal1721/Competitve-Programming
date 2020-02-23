#include<iostream>
using namespace std;
int main()
{
    int count=0,n,vn;cin>>n;
    vn=19;
    for(int i=1;i<n;)
        {
            vn+=9;
            int c=vn,s=0;
            while (c)
            {
                s+=c%10;c/=10;
                /* code */
            }
            if(s==10)i++;
        }
    cout<<vn<<'\n';
}