#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        //  ios::sync_with_stdio(0);
        // cin.tie(0);
        long int n,no;
        cin>>n;

        int  *p1,*p2,*p3,a[100],b[100],c[100];p1=a;p2=b;p3=c;
        cin>>no;
            for(int i=0;i<10;i++)
                {     
                    p1[i]=no%10;no=no/10;
                }
            for(int j=1;j<n;j++)
            {
                cin>>no;
                   for(int i=0;i<10;i++)
                {     
                    p2[i]=no%10;no=no/10;
                    if(p1[i]==p2[i])
                        p3[i]=0;
                    else p3[i]=1;
                }
                p1=c;
            }          
            int ans=0;
            for(int i=0;i<10;i++)
                {if(p1[i])ans++;
                }            
                cout<<ans<<"\n";
    }
}
