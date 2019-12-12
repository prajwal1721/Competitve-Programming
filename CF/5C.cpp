#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long no=0,st=0,max=0,count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        if(s[i]=='(')
            {
                i++;
                st=0;
                no++;
                st++;
                count=0;
                l:i++;
                    while(st>0)
                    {
                        if(i==s.length()) break;
                        count++;
                        if(s[i]=='(')st++;
                        else st--;
                       i++; 
                    }
                if(s[i]=='(' && i!=s.length())
                    {   cout<<"\n";goto l;st=1;}
                if(st) {count=0;} 
                 if(st==0)count++;
                // cout<<no<<""<<count<<endl;
                if(max<count)
                    max=count;
                    // cout<<no<<' ';
            }
    cout<<max<<" "<<no<<'\n';
}
