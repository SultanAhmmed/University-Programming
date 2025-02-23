#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	string line;
	cin >> line;
	int cnt = 0, mx = -1;
	for (int i = 0; i < line.size(); ++i) {
		if (line[i] == line[i + 1]) {
			cnt++;
			mx = max(mx, cnt);
		}
		else {
			cnt = 0;
		}
	}

	if (mx > 0)
		cout << mx + 1 << '\n';
	else {
		cout << '1' << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	// int tests;
	// cin >> tests;
	// while (tests--) {
	solve();
	// }
}
