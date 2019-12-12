#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a=0,t,day,diet;
        cin>>day>>diet;
        int days=0,i,f=0;
        for(i=0;i<day;i++)    
        {
            cin>>t;

            a+=t;
            if(a<diet && !f)
            {
                f=1;
                days=i+1;
            }
            a-=diet;
        }
        if(days)
            cout<<"NO "<<days<<'\n';
        else
            cout<<"YES\n";
    }
}
