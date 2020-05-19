// link:https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/friends-and-foes/description/
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: good q
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

int par[1000002];
int sz[1000002];
bool check[1000002];
int func(int x)
{
	if(x != par[x]) {
		par[x] = func(par[x]);
	}
	return par[x];
}
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n,m1,m2,i,u,v;
	cin>>n;
	for(i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
		check[i] = true;
	}
	cin>>m1;
	while(m1--) {
		cin>>u>>v;
		int a = func(u);
		int b = func(v);
		if(a == b) continue;
		par[b] = a;
		sz[a] += sz[b];
	}
	cin>>m2;
	while(m2--) {
		cin>>u>>v;
		int a = func(u);
		int b = func(v);
		if(a == b) {
			check[a] = false;
`		}
	}
	int ans = 0;
	for(i    = 1; i <= n; i++) {
        cout<<sz[func(i)]<<" "<<check[func(i)]<<"}";
		if(check[func(i)]) {
            cout<<i<<"::";
			ans = max(ans,sz[func(i)]);
		}
        cout<<"\n";
	}
	cout<<ans<<endl;
	return 0;
}