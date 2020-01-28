#include<iostream>
#include<algorithm>
// #include<pair>
#include<vector>

using  namespace std;
typedef long long ll;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) ;
int main()
{
    ll n,f,s;
    cin>>n;
    vector<pair<ll,ll>> a;
    for(int i=0;i<n;i++)
        {
            cin>>f>>s;
            a.push_back(make_pair(f,s));
        }
    ll count=0;
    sort(a.begin(),a.end());
    // cout<<"\n\n";
    ll p;
    for(auto it=a.begin();it<a.end()-1; )
    {
        auto it2=it+1;
        p=0;
        while((*it).first==(*it2).first && it2<a.end() )
            {
                // cout<<(*it).first<<" "<<(*it).second<<"::"<<(*it2).first<<" "<<(*it2).second<<'\n';
                it++;it2++;
                p++;
            }
            // p--;
        count=count+(p*(p+1))/2;
            // if(p>0)
        // it=it2+1;
            // else
            it=it2;
    }
    sort(a.begin(),a.end(),sortbysec);
    for(auto it=a.begin();it<a.end()-1;)
    {
        auto it2=it+1;
        p=0;
        while((*it).first==(*it2).first && (*it).second==(*it2).second &&  it2<a.end())
            {
                // cout<<(*it).first<<" "<<(*it).second<<"::"<<(*it2).first<<" "<<(*it2).second<<'\n';
                it++; it2++;
                p++;
            }
            // p--;
        count=count-(p*(p+1))/2;
            // if(p>0)
            // it=it2+1;
            // else 
            it=it2;
    }

    for(auto it=a.begin();it<a.end()-1;)
    {
        auto it2=it+1;
        p=0;
        while( (*it).second==(*it2).second && it2<a.end())
            {
                // cout<<(*it).first<<" "<<(*it).second<<"::"<<(*it2).first<<" "<<(*it2).second<<'\n';
                it++; it2++;
                p++;
            }
            // p--;
        count=count+(p*(p+1))/2;
            // if(p>0)
            // it=it2+1;
            // else
            it=it2;
    }
    cout<<count<<'\n';
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 