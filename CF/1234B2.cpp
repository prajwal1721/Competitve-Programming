#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
typedef long long ll;
void Print(queue<ll>& Queue ,ll k) 
{ 
    ll p=0;
    while (!Queue.empty() && p<k) { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
        p++;
    } 
} 
  
// Function to reverse the queue 
void reverseQueue(queue<ll>& Queue) 
{ 
    stack<ll> Stack; 
    while (!Queue.empty()) { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
    while (!Stack.empty()) { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
}
int main()
{
    ll n,t,k;
    cin>>n>>k;
    map<ll,int> a;
    vector <ll> v;
    queue<ll> ans;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    for(auto p=v.begin();p!=v.end();p++)
    {
        if(ans.size()>k) 
            {
                a.find(ans.front())->second=0;
                ans.pop();
            }
        if( ans.size()<=k)
            {
                if(!(a.find(*p)->second) || a.find(*p)->second==0)
                {
                    ans.push(*p);
                    a.insert(pair<ll,bool>(*p,1));
                }
            }
    }
    // ll o=(k>ans.size())?ans.size():k;
    // cout<<o<<"\n";
    cout<<ans.size();
    reverseQueue(ans); 
    Print(ans, k); 
}
