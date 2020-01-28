#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int n,count_a=0,count_b=0,count_d=0;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        for(int p=0;p<2;p++)
        {i=0;
        for(;i<n;)
        {
            for(; i<n && s[i]!='b';i++);
            s[i]='0';
            for(; i<n && s[i]!='a';i++);
            s[i]='0';
            for(; i<n && s[i]!='d';i++);
            s[i]='0';
            if(i<n)
            count_d++;
        }
        }
        // cout<<count_d<<":"<<i<<"\n";
        int ans=s.length()-count_d*3;
        cout<<ans<<"\n";
    }  
    
}