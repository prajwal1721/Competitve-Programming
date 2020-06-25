#include <bits/stdc++.h>
using namespace std;
void generator(string s,int l,int r)
{
    if(l==r){cout<<s<<"\n";return ;}
    for(int i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        generator(s,l+1,r);
        // generator(s,k+1,p,n);
        swap(s[i],s[l]);

    }
}
int main()
{
    string s;cin>>s;
    generator(s,0,s.length()-1);
}