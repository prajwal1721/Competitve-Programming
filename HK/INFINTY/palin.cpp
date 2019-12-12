#include<iostream>
#include<string>
using namespace std;
int  main()
{
    long int n;
    cin>>n;
    // char ca; 
    // cin>>ca;
    string s;
    while(n--)
    {
        int a[26]={0};
        cin>>s;
        int i=0,j=0;
        if(s.length()%2==0)
        {
            while(j<s.length())
            {
                i=i^((int)s[j++]);
            }
            if(i==0)
                cout<<"Good\n";
            else
                cout<<"Evil\n";
        break;
        }
        else
        {
            int i=0;
            int c=0;
            while(i<s.length())
            {
                a[s[i++]-'a']++;
            }
            int f=1;
            for(i=0;i<26;i++)
            {
                // cout<<a[i]<<" :"<<i<<'\n';
                if((a[i]%2)) c++;
                if(c>1) {
                    f=0;
                    break;
                }
            }
            if(f) cout<<"Good\n";
            else cout<<"Evil\n";
        }
    }
}