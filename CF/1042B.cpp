#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int n;
map<string, int> was;

void read() {	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		string s;
		cin >> c >> s;
		sort(s.begin(), s.end());
		if (was.count(s) == 0) {
			was[s] = c;
		} else {
			was[s] = min(was[s], c);
		}
	}
}

int get(string a, string b) {
 	if (!was.count(a) || !was.count(b)) {
 		return INF;
 	}
 	return was[a] + was[b];
}

void solve() {
	int ans = INF;
	if (was.count("A") && was.count("B") && was.count("C")) {
		ans = was["A"] + was["B"] + was["C"];
	}
    if (was.count("ABC")) {
    	ans = min(ans, was["ABC"]);
    }
    ans = min(ans, get("AB", "C"));
    ans = min(ans, get("A", "BC"));
    ans = min(ans, get("AC", "B"));
    ans = min(ans, get("AB", "BC"));
    ans = min(ans, get("AC", "BC"));
    ans = min(ans, get("AC", "AB"));
    if (ans == INF) {
    	ans = -1;
    }
    cout << ans << endl;
}

int main () {
    read();
    solve();
}
