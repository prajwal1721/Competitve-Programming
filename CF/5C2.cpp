#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    long long f=1, no=1,comp=0,st=0,max=0,count=0;
    string s;
    stack <char> stk; 
    cin>>s;
    long long i=0;
    while(i!=s.length()) 
      {
        if(i==s.length() && !stk.empty() ) 
        {
            break;
        }    
        else if(s[i]=='(')
        {
            if(f) {f=0;}
            stk.push(s[i]);
            comp=0;
        }
        else if(s[i]==')' && !stk.empty() )
        {
            count++;
            stk.pop();
        }    
        else if(stk.empty())
        {
            if(max<count)max=count;
            if(s[i]==')' && i<=s.length()-1 )
                {
                    count=0;
                    if(f==0)
                        {
                            no++;
                            f=1;
                        }
                    comp=1;
                }    
        }
          i++;
            if(max<count)max=count;
      }
        // if(!stk.empty() )
        // {if(stk.top()=='(') no--;}
        
        if(max==0) no=1;
        cout<<max*2<<" "<<no<<'\n';
}
