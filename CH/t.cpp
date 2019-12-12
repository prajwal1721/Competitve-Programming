#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long int a[1000]={0},pos[1000]={0},pp[1000]={0};
        long int c=2,t=0,n;
        pos[0]=2;
        pp[0]=1;
        cin>>n;
        a[0]=2;
        cout<<"\n\n0\n0\n";
        while(n!=c  )
        {
            if(a[t]>1)
            {
                ++c;
                t=pos[t]-pp[t];
                if(t<0)t=0;
                pp[t]=pos[t];
                pos[t]=c;
                a[t]++;
                cout<<t<<"\n";
            }
            else
            {
                t=0;++c;
                if(t<0)t=0;
                pp[t]=pos[t];
                pos[t]=c;a[t]++;
                cout<<t<<"\n";
            }
        }
    cout<<a[t];
    }
}