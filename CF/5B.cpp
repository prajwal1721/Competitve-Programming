#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
#define LOOP(ii,n) for(i=ii;i<n;i++)
int main()
{
        string s[1000];
        char input[1000][2000];
        long long ans=0,i=0;
        long long c=0,max=0;
        // freopen("f.txt","r",stdin);
// freopen("output.txt", "w", stdout);
        while(getline(cin,s[i]))
        {
                if(s[i].length()>max)
                    max=s[i].length();
                   i++; 
        }
            max+=2;
            for(int p=0;p<max;p++)
            {
                cout<<'*';
            }
            cout<<'\n';
            int f=0;
           for(int j=0;j<i;j++)
            {
                if((s[j].length()%2^(max%2))&& (f))
                {
                    cout<<'*';
                    int m=s[j].length();
                    m=ceil((float)(max-2-m)/2);
                    // cout<<m;
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<s[j];
                    m=((max-2-s[j].length())/2);
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<"*\n";
                    f=0;
                }
                else //if((s[j].length()%2^(max%2)) && f)
                {
                    cout<<'*';
                    int m=s[j].length();
                    m=((float)(max-2-m)/2);
                    // cout<<m;
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<s[j];
                    m=ceil(max-2-s[j].length()-m);
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<"*\n";
                   if(s[j].length()%2^(max%2))
                    f=1;
                }/*
                else
                {
                    cout<<'*';
                    int m=s[j].length();
                    m=((max-2-m)/2);
                    // cout<<m;
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<s[j];
                    m=(max-2-s[j].length()-m);
                    for(int k=0;k<m;k++)
                    cout<<' ';
                    cout<<"*\n";
                }
*/
            }
            LOOP(0,max)
            {
                cout<<'*';
            }

}
