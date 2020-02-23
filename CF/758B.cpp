#include<iostream>
using namespace std;
void check(char c,int a[],int j,int ch[])
{
    j++;
    if(c=='R'){a[0]=j;ch[0]=1;}
    else if(c=='B'){a[1]=j;ch[1]=1;}
    else if(c=='Y'){a[2]=j;ch[2]=1;}
    else if(c=='G'){a[3]=j;ch[3]=1;}
}
int main()
{
    string s;cin>>s;
    int checked[4]={0},c[4]={0},ans[4]={0},n=s.length();
    for(int j=0;j<4;j++)
    for(int i=j;i<n;i+=4)
    {
        if(s[i]=='!')c[j]++;
        else check(s[i],ans,j,checked);
    }
    for(int i=0;i<4;i++)
    {
        
    }
    for(int i=0;i<4;i++)
    {
        if(ans[i]==0)
        {
            for(int j=0;j<4;j++)
                if(!checked[j]){ans[i]=j+1;checked[j]=1;break;}
        }
        cout<<c[ans[i]-1]<<" ";
    }
    cout<<"\n";
}