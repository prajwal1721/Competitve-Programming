// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: good one goldmine tracing lexiographically
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
ll dp[2000][2000]={0};
ll n,m;
ll a[2000][2000];
vector<string> back(int i,int ind)
{
    vector<string> s,rt;
    if(i==n-1 ){s.push_back("") ;return s;}
    if(dp[i][ind]-a[i][ind]==dp[i+1][ind])
    {
        s=back(i+1,ind);
        for(auto o:s)rt.push_back(o+'U');
    }
    if(ind-1>=0 && dp[i][ind]-a[i][ind]==dp[i+1][ind-1])
        {
            s=back(i+1,ind-1);
            for(auto o:s)rt.push_back(o+'R');
        }
    if(ind+1<m && dp[i][ind]-a[i][ind]==dp[i+1][ind+1])
    {
        s=back(i+1,ind+1);
        for(auto o:s)rt.push_back(o+'L');
    }
    return rt;
}
void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<m;i++)dp[n-1][i]=a[n-1][i];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            dp[i][j]=dp[i+1][j];
            if(j-1>=0 && dp[i][j]<dp[i+1][j-1])dp[i][j]=dp[i+1][j-1];
            if(j+1<m && dp[i][j]<dp[i+1][j+1])dp[i][j]=dp[i+1][j+1];
            dp[i][j]+=a[i][j];
        }
    }
    ll mx=0;
    for(int j=0;j<m;j++)
    {
        mx=max(dp[0][j],mx);
    }
    vector<string> st,mn;
    for(int j=0;j<m;j++)
    {
        if(mx==dp[0][j])
            {
                st=back(0,j);
                sort(st.begin(),st.end());
                mn.push_back(*st.begin());
                break;
            }
    }
    sort(mn.begin(),mn.end());
    cout<<mx<<"\n"<<*mn.begin()<<"\n";
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



/* 
#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x.size())
#define FOR(x,y,z) for(int x = y; x <= z; x++)
#define int long long

const int N = 1e5 + 2, inf = 1e18;

int n, m;
int mat[2005][2005];
int dp[2005][2005];
vector<string> paths;
string s;

int go(int i, int j){
    if(i == 1)
        return mat[i][j];
    int c1 = -inf, c2 = -inf, c3 = -inf;
    int &ans = dp[i][j];
    if(~ans)
        return ans;
    if(i - 1 >= 1)
        c1 = mat[i][j] + go(i - 1, j);
    if(i - 1 >= 1 && j - 1 >= 1)
        c2 = mat[i][j] + go(i - 1, j - 1);
    if(i - 1 >= 1 && j + 1 <= m)
        c3 = mat[i][j] + go(i - 1, j + 1);
    return ans = max({c1, c2, c3});
}

void trace(int i, int j){
    if(i == 1)
        return ;
    int c1 = -inf, c2 = -inf, c3 = -inf;
    int ans = go(i,j);

    
    if(i - 1 >= 1 && j - 1 >= 1){ //left
        c2 = mat[i][j] + go(i - 1, j - 1);
        if(c2 == ans){
            s.push_back('L');
            return trace(i - 1, j - 1);
        }
    }
    if(i - 1 >= 1 && j + 1 <= m){   //right
        c3 = mat[i][j] + go(i - 1, j + 1);
        if(c3 == ans){
            s.push_back('R');
            return trace(i - 1, j + 1);
        }
    }
    if(i - 1 >= 1){ //up
        c1 = mat[i][j] + go(i - 1, j);
        if(c1 == ans){
            s.push_back('U');
            return trace(i - 1, j);
        }
    }
}


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    
    memset(dp, -1, sizeof(dp));
    cin >> n >> m;
    assert(n <= 2000 and m <= 2000);
    FOR(i,1,n) FOR(j,1,m){
        cin >> mat[i][j];
    }
    int ans = -inf;
    FOR(col,1,m){
        int get = go(n,col);
        ans = max(ans, get);
    }
    cout << ans << '\n';
    
    FOR(col,1,m){
        if(go(n,col) == ans){
            s.clear();
            trace(n,col);
            paths.push_back(s);
        }
    }

    sort(paths.begin(), paths.end());
        cout << paths[0];
}

//Iterative solution by particpant : ajaybgunjal

#include<bits/stdc++.h>
using namespace std;

bool isValid(int x, int N) {
    if(x <= N && x >= 1) {
        return true;
    }
    return false;
}

bool compare(pair<long long, char> A, pair<long long, char> B) {
    if(A.first == B.first) {
        return A.second < B.second;
    }
    return A.first > B.first;
}

void getDir(int node, int ind, string & way, vector<vector<char>> & dirs) {
    if(node == 1) {
        return;
    }
    way += dirs[node][ind];
    if(dirs[node][ind] == 'L') {
        ind --;
    } else if(dirs[node][ind] == 'R') {
        ind ++;
    }
    getDir(node - 1, ind, way, dirs);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<long long>> arr(N + 1, vector<long long>(M + 1, 0));
    for(int i = 1;i <= N;i ++) {
        for(int j = 1;j <= M;j ++) {
            cin >> arr[i][j];
        }
    }
    vector<vector<char>> dirs(N + 1, vector<char>(M + 1, 'L'));
    vector<vector<long long>> cost(2, vector<long long>(M + 1, 0));
    
    int current = 1, prev = 0;
    for(int i = 1;i <= M;i ++) {
        cost[current][i] = arr[1][i];
    }
    vector<pair<int, char>> dx = {{-1, 'L'}, {1, 'R'}, {0, 'U'}};
    for(int i = 2;i <= N;i ++) {
        swap(current, prev);
        for(int j = 1;j <= M;j ++) {
            vector<pair<long long, char>> vec;
            for(pair<int, char> p: dx) {
                if(isValid(j + p.first, M)) {
                    vec.push_back({cost[prev][j + p.first] + arr[i][j], p.second});
                }
            }
            sort(vec.begin(), vec.end(), compare);
            cost[current][j] = vec[0].first;
            dirs[i][j] = vec[0].second;
        }
    }
    
    long long MAXCOST = 0;
    
    for(int i = 1;i <= M;i ++) {
        MAXCOST = max(MAXCOST, cost[current][i]);
    }
    
    string WAY = "";
    
    for(int i = 1;i <= M;i ++) {
        if(MAXCOST == cost[current][i]) {
            string temp = "";
            getDir(N, i, temp, dirs);
            if(WAY == "" || WAY > temp) {
                WAY = temp;
            }
        }
    }
    
    cout << MAXCOST << "\n" << WAY << "\n";
}



 */