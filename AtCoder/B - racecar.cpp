#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	ll n;
	cin >> n;

	vector<string>s(n);
	for (ll i = 0; i < n; i++) {
		cin >> s[i];
	}


	for (ll i = 0; i < n - 1; ++i) {
		for (ll j = 0; j < n; ++j) {
			if (i == j) continue;

			string ans = s[i] + s[j];
			string temp = ans;
			reverse(temp.begin(), temp.end());

			if (ans == temp) {
				cout << "Yes" << '\n';
				return;
			}

		}
	}
	cout << "No" << '\n';


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
