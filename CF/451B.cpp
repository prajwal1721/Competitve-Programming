#include<iostream>
#include<vector>
#include<algorithm>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main()
{
    vector<int> v;
    int cn,t,n;cin>>n;cn=n;
    while (cn--)
    {
        cin>>t;v.push_back(t);
    }
    vector<int >b(v.begin(),v.end());
    bool st1=true,ed1=true;
    int st=-1,ed=-1;

    sort(b.begin(),b.end());auto it=b.begin();
    for(auto i=v.begin();i!=v.end() && *it!=b.end();)
    {
        if(*it!=*i)
        {
            if(st1){st=*it;st1=false;it++;}
            else if(ed1){ed=*it;ed1=false;it++;}
            
        }
        else it++;
    }

    bool ans=false;
    for(auto i=v.begin();i!=v.end()-1;i++)
    {

    }
    
}