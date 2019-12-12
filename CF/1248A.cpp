#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int count=0;
        long long int a1,a2,odd1=0,odd2=0,even1=0,even2=0; 
        long int n1, n2;
        cin>>n1;
        for(int i=0;i<n1;i++)
            {
                cin>>a1;
                if(a1%2==0) even1++;
                else odd1++;
            }
        cin>>n2;
        for(int i=0;i<n2;i++)
            {
                cin>>a1;        
                if(a1%2==0) even2++;
                else odd2++;
            }
            count =odd1*odd2+even1*even2;
            cout<<count<<'\n';
    }
}