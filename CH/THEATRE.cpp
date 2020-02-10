#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    typedef long long ll;
void cal(int A[],int a[],int b[],int c[],int d[])
{
            ll no=4;
        for(int i=0;i<no;i++)
        {
            if(a[i])A[0]++;
            if(b[i])A[1]++;
            if(c[i])A[2]++;
            if(d[i])A[3]++;
        }
}
int main()
{
    ll q,tot=0;cin>>q;
    while(q--)
    {
        int a[4]={0},b[4]={0},c[4]={0},d[4]={0},A[4]={0};
        vector<ll> show;
        ll req;cin>>req;
        while(req--)
        {
            char ch;int n;
            cin>>ch>>n;
            if(ch=='A')
                a[n/3-1]++;
            else if(ch=='B')
                b[n/3-1]++;
            else if(ch=='C')
                c[n/3-1]++;
            else d[n/3-1]++;
        }
             ll no=4;
        cal(A,a,b,c,d);
        vector<pair<ll,char>> v;
        for(ll i=0;i<no;i++)
        v.push_back(pair<ll,char>(A[i],(char)'A'+i));
        sort(v.begin(),v.end());
        auto aa=v.begin();
        // for(;aa!=v.end();aa++) cout<<(*aa).second<<"|";cout<<"\n";
        aa=v.begin();
        ll ff[4]={0};
        vector<ll> ans;
        while(aa!=v.end())
        {
            ll max=0;
            if((*aa).second=='A')
            {
                for(int ii=0;ii<no;ii++)
                {
                    if(!ff[ii]&& max <a[ii])
                    {
                        max=a[ii];ff[ii]=1;
                    }
                }
                ans.push_back(max);
                // cout<<'a'<<max<<"\n";
            }
            else  if((*aa).second=='B')
            {
                for(int ii=0;ii<no;ii++)
                {
                    if(!ff[ii]&& max <b[ii])
                    {
                        max=b[ii];ff[ii]=1;
                    }
                }
                // cout<<'b'<<max<<"\n";
                ans.push_back(max);
            }
            else  if((*aa).second=='C')
            {
                for(int ii=0;ii<no;ii++)
                {
                    if(!ff[ii]&& max <c[ii])
                    {
                        max=c[ii];ff[ii]=1;
                    }
                }
                // cout<<'c'<<max<<"\n";
                ans.push_back(max);
            }
            else  if((*aa).second=='D')
            {
                for(int ii=0;ii<no;ii++)
                {
                    if(!ff[ii]&& max <d[ii])
                    {
                        max=d[ii];ff[ii]=1;
                    }
                }
                // cout<<'d'<<max<<"\n";
                ans.push_back(max);
            }
            aa++;
        }
        ll cur=100,profit=0,non=0;
        sort(ans.begin(),ans.end(),greater<ll> ());
        for (auto pp=ans.begin();pp!=ans.end();pp++)
        {
            // cout<<cur<<"::"<<*pp<<"\n";
            profit+=cur*(*pp);
            cur-=25;
            if(! *pp)non++;
        }
        profit-=(non)*100;
        cout<<profit<<"\n";
        tot+=profit;
    }
    cout<<tot<<"\n";
}