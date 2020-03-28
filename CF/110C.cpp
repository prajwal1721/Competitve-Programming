// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t,n,sum=0,m=0;cin>>n;
        string s="";
        while (sum<=n)
        {
            if((n-sum)%7==0)
            {
                m=1;
                ll no=(n-sum)/7;
                while (no--)
                {
                    s+="7";
                }
                break;
            }
            else
            {sum+=4;s+="4";}
        }
        if(m)cout<<s<<"\n";
        else cout<<"-1\n";
        
}
