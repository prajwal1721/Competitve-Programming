#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll; 
int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n,x;
    cin>>n;
    while (n)
    {
        string s;
        cin>>s;
        ll k = 0;
        ll t_rows = s.size()/n;
        char v[t_rows][n];
 
        for(int i = 0; i < t_rows; i++)
        {
            if(i % 2 == 0)
            {

                for(ll j = 0; j < n; j++)
                {
                    v[i][j] = s[k++];
                }
            }
            else
            {
                for(ll j = n-1; j >= 0; j--)
                {
                    v[i][j] = s[k++];
                }
            }
 
        }
        for(int i =0; i < n; i++)
        {
            for(int j =0; j < t_rows; j++)
            {
                cout<<v[j][i];
            }
        }
        cout<<endl;
        
        cin>>n;
    }
 
    return 0;
}

/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    
    // cin.tie(false);
    ll n; cin>>n;
    while(n!=0)
    {
        string s,ans="";cin>>s;
        ll j=0,f=0;
            for(j=0;j<s.length();)
                {
                    ans+=s.substr(j,n);
                        j+=n;
                    if(j+n<s.length())
                    {
                        string temp=s.substr(j,n);
                        reverse(temp.begin(),temp.end());
                        ans+=temp;
                    }
                    else f=1;
                        j+=n;
                }
             string temp=s.substr(j-n,s.length()-j+n);
                if(f) 
                reverse(temp.begin(),temp.end());
        ans+=temp;
        ll x=0,cur=0,count=0;
        for(int i =0; i<n; i++)
        {
            for(int j = 0+i; j < ans.length(); j+=n)
            {
                cout<<ans[j];
            }
            
        }
 
        cout<<"\n";
        cin>>n;
    }
}
this also works
*/