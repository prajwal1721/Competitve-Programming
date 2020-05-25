// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: very imp sum 
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

const int N = 205;
int T, n, f[N][N], p10[N] = {1};

typedef long long int ll;
void solve() {
	scanf("%d", &n);
	// FOR(i,0,200) FOR(j,0,200-i) f[i][j] = -1;
    for(int i=0;i<=200;i++)
        for(int j=0;j<200-i;j++)
            f[i][j]=-1;
    for(int i=1;i<=200;i++)
	     p10[i] = p10[i-1] * 10 % n;

	queue<pair<int,int>> st;
	st.push({0,1});
	f[0][1] = 6%n;
	st.push({1,0});
	f[1][0] = 8%n;

	while (! st.empty()) {
		int x = st.front().first, y = st.front().second;
		st.pop();
		if (f[x][y] == 0) {
			for(int i=1;i<=x;i++) printf("8");
			 for(int i=1;i<=y;i++) printf("6");
			printf("\n");
			return ;
		}
		if (x + y == 200) continue;

		if (f[x][y+1] == -1) {
			f[x][y+1] = (f[x][y] * 10 % n + 6) % n;
			st.push({x, y + 1});
		}
		if (f[x+1][y] == -1) {
			f[x+1][y] = (8 * p10[x+y] % n + f[x][y]) % n;
			st.push({x + 1, y});
		}
	}

	puts("-1");
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