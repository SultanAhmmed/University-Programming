#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	char p, q;
	cin >> p >> q;

	vector<int>ch_ara = {0, 3, 4, 8, 9, 14, 23};

	cout << abs(ch_ara[p - 'A'] - ch_ara[q - 'A']) << '\n';

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
