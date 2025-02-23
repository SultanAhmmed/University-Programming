#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	ll n;
	cin >> n;
	if (n <= 999) cout << n  << '\n';

	else if (n >= 1000 && n <= 9999) {
		n /= 10;
		cout << n << "0" << '\n';
	}

	else if (n >= 10000 && n <= 99999) {
		n /= 100;
		cout << n << "00" << '\n';
	}


	else if (n >= 100000 && n <= 999999) {
		n /= 1000;
		cout << n << "000" << '\n';
	}

	else if (n >= 1000000 && n <= 9999999) {
		n /= 10000;
		cout << n << "0000" << '\n';
	}

	else if (n >= 10000000 && n <= 99999999) {
		n /= 100000;
		cout << n << "00000" << '\n';
	}

	else {
		n /= 1000000;
		cout << n << "000000" << '\n';
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
