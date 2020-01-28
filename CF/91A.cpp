#include<iostream>
#include<cstring>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll n=s2.length(),count=0;
    set<char> se1(s1.begin(),s1.end());
    set<char> se2(s1.begin(),s1.end());
    if(se1.size()==se2.size())
    {
        for(auto i=se1.begin(),j=se2.begin();i!=se1.end();i++,j++)
            if(*i!=*j)
                {
                    cout<<"-1\n";
                     return 0;
                }
                ll p=0;

                // for(ll i=0;i<s1.length();i++)
                while(s2.length())
                    {
                        if(s1.find(s2)){
                                s2=string(s2.begin()+s2.length(),s2.end());   
                                count++;
                            }
                        else
                            {
                                s2=string(s2.begin()+1,s2.end());
                                count++;
                            }
                    }

                    cout<<count<<"\n";
    }
    else
        cout<<"-1\n";
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());

}