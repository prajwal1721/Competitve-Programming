#include<iostream>
#include<cstring>
using namespace std;
int main()
{
        string s;
        long long ans=0;
        long long c=0;
         getline (std::cin,s);
        do{
        if(s[0]=='+')
            c++;
        else if(s[0]=='-')
            c--;
        else
        {
         int j= s.find(':',0);
            ans+=(s.length()-j-1)*c;
        }
    }while( getline (std::cin,s));
    cout<<ans;
}