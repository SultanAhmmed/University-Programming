#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7
//#define vi vector<int>
using namespace std;

void solve() {

	int week;
	cin >> week;
	ll sum = 0;

	for (int i = 0; i <= 7; ++i) {
		if (i == 7) {
			cout << sum << " ";
			sum = 0;
			i = 0;
			--week;
		}
		if (week == 0) {
			break;
		}


		int steps;
		cin >> steps;

		sum += steps;
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
