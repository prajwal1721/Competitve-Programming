#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long count=0,ans=0,n,a[26];
    string s;
    for(int i=0;i<26;i++)
        a[i]=0  ;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
        a[s[i]-'a']++;
    for(int i=0;i<26;i++)
        {
            if(a[i]==0) ans--;
            else if(a[i]>1) {ans+=a[i]-1;count+=a[i]-1;}
        }
    if(ans>0) count=-1;
    cout<<count<<'\n';
}
