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
    string s1,s2;
    ll dp[82][82]={0};
map<string,bool> processed[81][81];

void backtrack( int i, int j,set<string>& sequences,string word)
{

    /**
     * here we are processing for each word till the end
     * opitmization:: once if done don't again go for it  
     *  
     */  
    if(processed[i][j].find(word)!=processed[i][j].end())
      return;
    if(i==0||j==0)
    {
      sequences.insert(word);
      // printf("%s\n",word.c_str());
    }
    else if(s1[i-1]==s2[j-1])
    {
      word = s1[i-1] + word;
      backtrack(i-1,j-1,sequences,word);
    }
    else if(dp[i][j-1]>dp[i-1][j])
    {
      backtrack(i,j-1,sequences,word);
    }
    else if(dp[i-1][j]>dp[i][j-1])
    {
      backtrack(i-1,j,sequences,word);
    }
    else
    {
      backtrack(i,j-1,sequences,word);
      backtrack(i-1,j,sequences,word);
    }
    processed[i][j][word] = true;
}   
void solve()
{
    cin>>s1>>s2;

    for(int i=0;i<=s1.length();i++)
    {
        for(int j=0;j<=s2.length();j++)
        {
            dp[i][j]=0;
            if(i==0 || j==0 )dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    set<string> sequences;
    // cout<<dp[s1.length()][s2.length()]<<"\n";
    backtrack(s1.length(),s2.length(),sequences,"");
    for (auto i:sequences)cout<<i<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}
