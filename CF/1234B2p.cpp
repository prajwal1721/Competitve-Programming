#include<iostream>
#include<set>
#include<stack>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t,k;
    cin>>n>>k;
    set <ll> s;
    queue <ll> ans,q;
    while(n--)
    {
        cin>>t;
        q.push(t);
    }
    // scan complete
    ll p=0;
    auto it=q.front();
    while(!q.empty())
    {
        if(s.find(q.front())==s.end() && ans.size()>k)
        {
            // cout<<"hi";
            s.erase(s.find(ans.front()));
            ans.pop();
        }
        if(ans.size()<=k && s.find(q.front())==s.end())
        {
            // cout<<"in";
                ans.push(q.front());
                s.insert(q.front());
                q.pop();
        }
        else 
        {
            q.pop();
        }
    // cout<<s.size()<<"\n";
    while (ans.empty())
        {cout<<ans.front()<<" ";
        ans.pop();}
    // cout<<"\n\n\n";
    }
    stack<ll >st;
    while(!ans.empty() && st.size()<=k)
    {
        st.push(ans.front());
        ans.pop();
    }
    cout<<st.size()<<"\n";
    // for(auto a=ans.front();a!=ans.back();a++)
        // cout<<a<<" ";
    while (!st.empty())
        {cout<<st.top()<<" ";
        st.pop();}

    cout<<"\n";
}

