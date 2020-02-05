#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    float t;
    cin>>t;
    while(t!=0)
    {
        // cout<<(int)pow(1-(exp(t)),-1)<<"Card(s)\n";
        float count=0,sum=0;
        for(int i=2;sum<=t;i++)
            {sum+=(float)1/(float)i;count++;}
        cout<<count<<" card(s)\n";
        cin>>t;
    }
}