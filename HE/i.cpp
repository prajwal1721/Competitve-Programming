#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int i=0;
    char c[n];
    while (i<n) 
    {
        string s;cin>>s;i++;
        c[i]=s[0];
    }
    i=0;
    while (i<n)
    {
        int no;
        cin>>no;
        if(c[i]>='A'&& c[i]<='Z')
            no=no-'A'+'a'-13;
        else 
            no=no-13+'A'-'a';
        cout<<(char)(no)<<" "<<no<<"\n";
    }
    cout<<"\n";

}