#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<string>
typedef long long int ll;

using namespace std;



int main()
{
    ll n,k,a_c=0,b_c=0;
    string a,b,s1="a",s2="b";
    cin>>n>>a>>b>>k;
    queue<string> v;
    v.push(s1);
    v.push(s2);
    string x;
    char curr;
    for(int i = 2; i < n; i++)
    {   
        x=v.front()+v.back()+v.back();
        v.push(x);v.pop();
    }
    long long no=0,i=0;
    x = v.back();
    a_c=a.length();
    b_c=b.length();
    while(no<=k && i<x.length())
    {
        if(x[i]=='a'){no+=a_c;curr='a';}
        else {no+=b_c;curr='b';}
        i++;
    }
    // cout<<no<<" "<<k;
    // cout<<<<"\n";
    if(i>=x.length() )
    {
        cout<<"-1";
    }
    else     if(curr=='a' && no>k)
    {   
        no-=a_c;
        cout<<b[k-no+1]<<"\n";
    }else     if(curr=='b' && no>k)
{
        no-=b_c;
 cout<<a[k-no+1]<<"\n";
}    
else     if(curr=='a' && no==k)
    {   
        
        cout<<b[b_c-1]<<"\n";
    }
    else 
    cout<<a[a_c-1]<<"\n";
}