#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int mach=-1;
        string s,n1,n2,n3;
        cin>>n1>>s>>n2>>s>>n3;
        int len=s.length();
        for(int i=0;i<n1.length();i++)
        {
            if(n1[i]=='m'){mach=0;break;}
        }
        for(int i=0;i<n2.length();i++)
        {
            if(n2[i]=='m'){mach=1;break;}
        }
        for(int i=0;i<n3.length();i++)
        {
            if(n3[i]=='m'){mach=2;break;}
        }
        if(mach==0)
            cout<<stoi(n3)-stoi(n2)<<" + "<<stoi(n2)<<" = "<<stoi(n3)<<"\n";
        else if(mach==1)
            cout<<stoi(n1)<<" + "<<stoi(n3)-stoi(n1)<<" = "<<stoi(n3)<<"\n";
        else 
            cout<<stoi(n1)<<" + "<<stoi(n2)<<" = "<<stoi(n1)+stoi(n2)<<"\n";
    }
}