// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,t;cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    stack<int> s;
                int maxArea = 0;
                int area = 0;
                int i;
                for(i=0; i < heights.size();){
                    if(s.empty() || heights[s.top()] <= heights[i]){
                        s.push(i++);
                    }else{
                        int top = s.top();
                        s.pop();      
                        //if stack is empty means everything till i has to be
                        //greater or equal to heights[top] so get area by
                        //heights[top] * i;
                        if(s.empty()){
                            area = heights[top] * i;
                        }
                        //if stack is not empty then everythin from i-1 to   heights.top() + 1
                        //has to be greater or equal to heights[top]
                        //so area = heights[top]*(i - stack.top() - 1);
                        else{
                            area = heights[top] * (i - s.top() - 1);
                        }
                        if(area > maxArea){
                            maxArea = area;
                        }
                    }
                }
                while(!s.empty()){
                    int top = s.top();
                    s.pop();
                    //if stack is empty means everything till i has to be
                    //greater or equal to heights[top] so get area by
                    //heights[top] * i;
                    if(s.empty()){
                        area = heights[top] * i;
                    }
                    //if stack is not empty then everything from i-1 to       height.top() + 1
                    //has to be greater or equal to heights[top]
                    //so area = heights[top]*(i - stack.top() - 1);
                    else{
                        area = heights[top] * (i - s.top() - 1);
                    }
                if(area > maxArea){
                        maxArea = area;
                    }
                }
                return maxArea;
    cout<<maxArea<<"\n";

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}
