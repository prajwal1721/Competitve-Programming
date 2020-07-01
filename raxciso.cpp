// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:https://www.hackerrank.com/contests/pasc-dp/challenges/raxciso
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
    ll t,n;cin>>n;
    vector<pair<ll,ll>> v;
    vector<ll> v1;
    for(int i=0;i<n;i++){cin>>t;v.push_back({t,i});v1.push_back(t);}
    sort(v.begin(),v.end());
    if(n==2){cout<<v[0].first-v[1].first<<"\n"<<1<<" "<<2<<"\n";return;}
  
    if(n==3){
        if(v[0].first==v[2].first ){cout<<"0\n1 2 3\n";}
        else if(v[0].first==v[1].first){cout<<abs(v[2].first-v[1].first)*2<<"\n"<<max(v[0].second,v[1].second)+1<<" "<<v[2].second+1<<" "<<min(v[0].second,v[1].second)+1<<"\n";}
        else if(v[2].first==v[1].first){cout<<abs(v[0].first-v[1].first)*2<<"\n"<<max(v[1].second,v[2].second)+1<<" "<<v[0].second+1<<" "<<min(v[1].second,v[2].second)+1<<"\n";}
        else {
            cout<<abs(v[0].first-v[2].first)+abs(v[2].first-v[1].first)<<"\n"<<max(v[0].second,v[1].second)+1<<" "<<v[2].second+1<<" "<<min(v[0].second,v[1].second)+1<<"\n";
        }
        return ;
    }
    
    // n>=4

    if(n%2)
    {
        ll m2=n/2,m1=n/2,p3=0,p4=n-1,ans[n],ans2[n];
        ans[m1]=v[p4].second;p4--;m1--;m2++;
        for(int i=0;i<n;)
        {
            if(i<n)
            {ans[m2]=v[p3++].second;m2++;i++;}
            if(i<n)
            {ans[m1]=v[p3++].second;m1--;i++;}
            if(i<n)
            {ans[m1]=v[p4--].second;m1--;i++;}
            if(i<n)
            {ans[m2]=v[p4--].second;m2++;i++;}
        }
         m2=n/2;m1=n/2;p4=0;p3=n-1;
         ans2[m1]=v[p4].second;p4++;m1--;m2++;
        for(int i=0;i<n;)
        {
            if(i<n)
            {ans2[m2]=v[p3--].second;m2++;i++;}
            if(i<n)
            {ans2[m1]=v[p3--].second;m1--;i++;}
            if(i<n)
            {ans2[m1]=v[p4++].second;m1--;i++;}
            if(i<n)
            {ans2[m2]=v[p4++].second;m2++;i++;}
        }
        ll a1=0,a2=0;
        for(int i=1;i<n;i++){a1+=abs(v1[ans[i]]-v1[ans[i-1]]);}
        for(int i=1;i<n;i++){a2+=abs(v1[ans2[i]]-v1[ans2[i-1]]);}
        if(a1>=a2)
        {
            // cout<<"in";
            for(int j=1;j<n;j++)
            for(int i=1;i<n;i++){if(v1[ans[i]]==v1[ans[i-1]]&& ans[i]>ans[i-1])swap(ans[i],ans[i-1]);}
            cout<<a1<<"\n";for(int i=0;i<n;i++)cout<<ans[i]+1<<" ";cout<<"\n";}
        else
        {
            for(int j=1;j<n;j++)
            for(int i=1;i<n;i++){if(v1[ans2[i]]==v1[ans2[i-1]]&& ans2[i]>ans2[i-1])swap(ans2[i],ans2[i-1]);}
            cout<<a2<<"\n";for(int i=0;i<n;i++)cout<<ans2[i]+1<<" ";cout<<"\n";}
        
    }
    else
    {
        ll m2=n/2,m1=n/2,p3=0,p4=n-1,ans[n];
        ans[m1]=v[p4].second;p4--;m1--;m2++;
        for(int i=0;i<n;)
        {
            if(i<n)
            {ans[m1]=v[p3++].second;m1--;i++;}
            if(i<n)
            {ans[m2]=v[p3++].second;m2++;i++;}
            if(i<n)
            {ans[m1]=v[p4--].second;m1--;i++;}
            if(i<n)
            {ans[m2]=v[p4--].second;m2++;i++;}
        }
        ll a1=0;
        for(int i=1;i<n;i++){a1+=abs(v1[ans[i]]-v1[ans[i-1]]);}
        for(int j=1;j<n;j++)
        for(int i=1;i<n;i++){if(v1[ans[i]]==v1[ans[i-1]]&& ans[i]>ans[i-1])swap(ans[i],ans[i-1]);}
        cout<<a1<<"\n";
        for(int i=0;i<n;i++)cout<<ans[i]+1<<" ";cout<<"\n";
    }


    // for(int i=0;i<n;i++)cout<<ans1[i]<<" ";cout<<"\n";
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



1) This is standard DP (bitmask) problem.
2) Lets start from position 1, and keep mask of already taken index of permutation.
3) At each step, we can find what all indices are remaining. And try all combinations of such indices.
4) We should also keep track of previous taken index and compute their contribution to V and maximize it.
5) For finding the permutation, we can again find indices in order of (N to 1) which lead to max(V), and take the index and move next. See code for more clarification.







#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x.size())
#define FOR(x,y,z) for(int x = y; x <= z; x++)
#define int long long

const int N = 1e5 + 2, inf = 1e18;

int n;
int val[20];
int dp[18][1 << 18];

int go(int prev, int mask){
    if(__builtin_popcountll(mask) == n)
        return 0;
    int &ans = dp[prev][mask];
    if(~ans)
        return ans;
    ans = 0;
    FOR(next,0,n-1) if((mask >> next & 1) == 0){
        int gain = abs(val[prev] - val[next]);
        gain = gain + go(next, mask | (1 << next));
        ans = max(ans, gain);
    }
    return ans;
}

void trace(int prev, int mask){
    if(__builtin_popcountll(mask) == n)
        return ;

    int ans = go(prev, mask);   //real_max_answer
    //Now we find max. index which gives this 'ans' which is maximum
    //Such choices are taken at each state to get lex. max permutation
    //See the order of next id in permutation is found from N to 1

    for(int next = n - 1; next >= 0; --next) if((mask >> next & 1) == 0){
        int gain = abs(val[prev] - val[next]);
        gain = gain + go(next, mask | (1 << next));
        if(gain == ans){
            cout << next + 1 << ' ';
            return trace(next, mask | (1 << next));
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);  

    memset(dp, -1, sizeof(dp));
    cin >> n;
    FOR(i,0,n-1){
        cin >> val[i];
    }
    int ans = -inf;
    FOR(start,0,n-1){
        int get = go(start, 1 << start);
        ans = max(ans, get);
    }
    cout << ans << '\n';

    for(int start = n - 1; start >= 0; --start){
        int get = go(start, 1 << start);
        if(get == ans){
            cout << start + 1 << ' ';
            trace(start, 1 << start);
            return 0;
        }
    }
}

//Iterative solution by participant : ajaybgunjal

#include<bits/stdc++.h>
using namespace std;

#define fastio(); ios_base::sync_with_stdio(false); cin.tie(NULL); 

int main() {
    fastio();

    int N;
    cin >> N;
    vector<long> arr(N, 0);
    
    for(int i = 0;i < N;i ++) {
        cin >> arr[i];
    }
    int size1 = (1 << N);
    vector<vector<long>> dp(size1, vector<long>(N, 0));
    vector<vector<int>> lastBitUsed(size1, vector<int>(N, -1));
    
    for(int mask = 1;mask < size1;mask ++) {
        for(int bit = 0;bit < N;bit ++) {
            if(!(mask & (1 << bit))) {
                continue;
            }
            for(int lastBit = 0;lastBit < N;lastBit ++) {
                if(!(mask & (1 << lastBit))) {
                    continue;
                }
                if(bit == lastBit) {
                    continue;
                }
                int lastMask = mask ^ (1 << bit);
                if(dp[mask][bit] <= dp[lastMask][lastBit] + abs(arr[bit] - arr[lastBit])) {
                    dp[mask][bit] = dp[lastMask][lastBit] + abs(arr[bit] - arr[lastBit]);
                    lastBitUsed[mask][bit] = lastBit;
                }
            }
        }
    }
    long maxVal = 0;
    int ind = 0;
    int mask = (1 << N) - 1;
    for(int i = 0;i < N;i ++) {
        if(maxVal <= dp[mask][i]) {
            maxVal = dp[mask][i];
            ind = i;
        }
    }
    cout << maxVal << "\n";
    while(mask > 0) {
        int saveInd = ind;
        cout << ind + 1 << " ";
        ind = lastBitUsed[mask][ind];
        mask = mask ^ (1 << saveInd);
    }
}











 */