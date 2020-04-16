#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    priority_queue<ll> q;
    ll n;cin>>n;
    ll cnt=0;
    string ans="";
    while (n--)
    {
        ll no;string s;
        cin>>s;
        if(s=="insert")
        {
            cin>>no;
            q.push(-no);
            ans+=s+" "+to_string(no)+"\n";cnt++;
        }
        else if(s=="getMin")
        {
            cin>>no;
            if(q.empty())q.push(-no),  ans+="insert "+to_string(no)+"\n",cnt++;
            // cout<<q.top()<<' ';
            // cout<<(q.top()>-no)<<"\n";
            if(q.top()>-no){while ( !q.empty() && q.top()>-no)
            {
                // cout<<"in";
                q.pop();ans+="removeMin\n";cnt++;
            }
            }
            if(q.empty() || q.top()<-no){  q.push(-no);
            ans+="insert "+to_string(no)+"\n";cnt++;}
            ans+=s+" "+to_string(no)+"\n";cnt++;
        }
        else if(s=="removeMin")
        {
            if(q.empty())q.push(0),  ans+="insert "+to_string(0)+"\n",cnt++;
           
             q.pop();ans+="removeMin\n";cnt++;
        }
    }
    cout<<cnt<<"\n"<<ans;
    
}