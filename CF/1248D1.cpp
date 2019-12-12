#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[10000];
    cin>>s;
    int br,c1=0,c2=0;
    int st=0;
    int no=0;
    int check=0;
    for(int i=0;i<n;i++)
       {
           if(s[i]=='(')
            {
                c1++;
                check--;
                st=1;
            }
            else if(s[i]==')')
            {
                c2++;
                check++;
            }
            if(check==0 && c1==c2 && st==1)
                {
                    no+=c1;
                    c1=c2=0;
                    st=0;
                }
            else if(check==0)
            {
                c1=c2=0;st=0;
            }
       }
       cout<<no;       
}