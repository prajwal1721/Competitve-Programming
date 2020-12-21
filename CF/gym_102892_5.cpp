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
    ll n,t,m,target;
    cin>>n>>m>>target;
    string s;
    vector<pair<ll,ll>> score;
    vector <string> data;
    for(int i=0;i<n;i++){cin>>t;score.push_back({t,i});}
    for(int i=0;i<n;i++){cin>>s;data.push_back(s);}
    ll dp[1001][1001]={0};
    sort(score.begin(),score.end(),[](pair<ll,ll>p1,pair<ll,ll>p2)->bool{
        if(p1.first==p2.first)return p1.second>p2.second;
        return  p1.first>p2.first;
    });
    for(int j=0;j<m;j++){
        int c=0;
        for(int i=0;i<n;i++){   
            if(data[score[i].second][j]=='1'){
                dp[c][j]=score[i].first;
                c++;}
        }
    }
    
    ll cum=0;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){   
            cum+=dp[j][i];
        }   
        if(target<=cum){
            cout<<j+1<<"\n";
            return ;
        }
    }
    // */
    cout<<-1<<"\n";
    return ;
    
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