#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	ll n;
	cin >> n;
	cout << n << " ";
	while (n > 1) {

		if (n % 2 != 0) {
			n = (n * 3) + 1;

		}
		else {
			n = n / 2;
		}
		cout << n << " ";
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
