#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;int n,c_dot=0,c_hash=0;
    cin>>s>>n;
    vector<int> v;
    v.push_back(0);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])c_dot++;
        // else c_hash++;
        v.push_back(c_dot);
    }
    /*for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<"\n";
    }*/
    while (n--)
    {
        int a,b;cin>>a>>b;
        cout<<v[b-1]-v[a-1]<<"\n";
    }
    
}