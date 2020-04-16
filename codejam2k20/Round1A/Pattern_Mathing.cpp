// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp


// 3 points

#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;

void solve()
{
    ll n,cn;cin>>n;  cn=n;
    vector<string >v,v_p,v_s;
    string t;
    while (n--)
    {   
        cin>>t;v.push_back(t);
    }
    for(ll i=0;i<cn;i++)
    {
        string s1="",s2="";ll ii=0;
        for(;ii<v[i].length();ii++)
        {
            if(v[i][ii]=='*')break;
                s1+=v[i][ii];
        }
        if(s1.length()>0)v_p.push_back(s1);ii++;
        for(;ii<v[i].length();ii++)
        {
                s2+=v[i][ii];
        }
        if(s2.length()>0)v_s.push_back(s2);
    }
    sort(v_p.begin(),v_p.end(),[](string &s1,string &s2)->bool{
         return s1.size()>s2.size();
    });

    sort(v_s.begin(),v_s.end(),[](string &s1,string &s2)->bool{
         return s1.size()>s2.size();
    });
    // for(ll i=0;i<v_p.size();i++)
    // {
    //     cout<<v_p[i]<<"\n";
    // }
    // for(ll i=0;i<v_s.size();i++)
    // {
    //     cout<<v_s[i]<<"\n";
    // }
    ll flag=0;
      //suffix
    string ans_s="";ll j=0;
    if(v_s.size()>0)ans_s=v_s[0];
        for(ll i=1;i<v_s.size();i++)
        {
            ll i1=ans_s.length()-1,i2=v_s[i].length()-1;
            while (i1>=0 && i2>=0)
            {
              if(ans_s[i1]!=v_s[i][i2]){flag=1;break;}
              i1--;i2--;
            }
            
        }

  

    string ans_p=""; j=0;
    if(v_p.size()>0)ans_p=v_p[0];
        for(ll i=1;i<v_s.size();i++)
        {
            ll i1=0,i2=0;
            // if(v_s[i].length())
            while (i1<ans_p.length() && i2<v_p[i].length())
            {
              if(ans_p[i1]!=v_p[i][i2]){flag=1;break;}
              i1++;i2++;
            }
        }
    //done
    string f;
    if(flag==1 || ans_p.length()==0 && ans_s.length()==0)cout<<"*\n";
    else 
    {
        // cout<<"in";
        if(ans_p.length()>0 && ans_s.length()>0)
        {
                ll ii=0;
            for(ll i=0;i<ans_p.length();i++)
            {

            ll f1=0;
            if(ans_p[i]==ans_s[0])
            {
                for(;ii<ans_s.length();ii++)
                {
                    if(i<ans_p.length() && ans_p[i]==ans_s[ii])
                        {f+=ans_p[i];i++;}
                    else {f1=1;break;}
                }
                if(i<n && !f1)
                {
                    while(ii<ans_s.length())
                        {f+=ans_s[ii];ii++;}
                }
            }
            else f+=ans_p[i];
            }
            for(;ii<ans_s.length();ii++)
                f+=ans_s[ii];
            cout<<f<<"\n";
        }
        else if(ans_p.length()>0)
            cout<<ans_p<<"\n";
        else cout<<ans_s<<"\n";
    }
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t;cin>>t;ll i=1;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
        }

    return 0;
}