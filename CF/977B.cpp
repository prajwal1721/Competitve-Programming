#include<iostream>
#include<map>
using namespace std;
int main()
{
    int max=0,n;cin>>n;
    string t="",s,p="";cin>>s;
    map<string,int> m;
    for(int i=0;i<s.length()-1;i++)
    {
        {t=s[i];t+=s[i+1];}
        // cout<<t<<" ";
        m[t]++;
        if(max<=m[t]){p=t;max=m[t];}
    }
    cout<<p<<"\n";
}