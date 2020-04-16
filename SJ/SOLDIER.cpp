#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
typedef long long int ll;
int dp[7][1005];
int p[7][103], q[7][103], n[7];
int main(){
    int N, t;
    cin >> N >> t;
    for(int i=0;i<7;++i){
        n[i] = 0;
        for(int j=0;j<1005;++j){
            dp[i][j] = 0;
        }
    }
    for(int i=0;i<N;++i){
        int u,v,w;
        cin >> u >> v >> w;
        p[u][n[u]] = v;
        q[u][n[u]] = w;
        n[u]++;
    }
    for(int i=0;i<=t;++i){
        dp[0][i] = (int) 1e9;
    }
    for(int k = 1; k <= 6; ++k){
        for(int c = 1; c<=t; ++c){
            dp[k][c] = dp[k][c-1];
            for(int i=0;i<n[k];++i){
                if( c - p[k][i] < 0 ) continue;
                dp[k][c] = max(dp[k][c], min(q[k][i], dp[k-1][c - p[k][i]]));
            }
        }
    }
    cout << dp[6][t] << endl;
    return 0;
}