#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
ll check(string s)
{
    string t=s;
    reverse(s.begin(),s.end());
    if(t==s)return 1;
    else return 0;
}
int main()
{
    ll n,ma;
    cin>>n>>ma;
    vector <string> v;
    vector <string> palin;
    map<string,ll>m;
    while (n--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        if(check(s))palin.push_back(s);
        if(m[s])
            m[s]++;
        else
        {
            reverse(s.begin(),s.end());
            m[s]++;
        }
        
    }
    string ansf="",ansb="";
        for(auto i=v.begin();i!=v.end();i++)
        {
            if(m[(*i)]>=2)
            {
                int k=0;
                while(k++<m[*i]/2)ansf+=*i;
                string cs=*i;k=0;
                reverse(cs.begin(),cs.end());
                while(k++<m[*i]/2)ansb=cs+ansb;
            }
        }
        int f=0;
        string ans="";
        if(!palin.empty())
        {
            for(auto i=palin.begin();i!=palin.end();i++)
            {
                if(m[(*i)]%2){ans=ansf+*i+ansb;f=1;break;}
            }
        }
        if(!f)ans=ansf+ansb;
    cout<<ans.length()<<"\n"<<ans<<"\n";
    
}