#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long

//#define vi vector<int>
using namespace std;

void solve() {
	ull sum = 0;
	for (int i = 0; i < 64; ++i) {
		int x;
		cin >> x;
		if ( x == 1) {
			ull ans = (ull)pow(2, i);
			sum += ans;
		}
	}
	cout << sum << '\n';


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	solve();
}
