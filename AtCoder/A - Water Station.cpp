#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7
//#define vi vector<int>
using namespace std;

void solve() {

	int pos;
	cin >> pos;

	int temp = pos;
	int last_number = temp % 10;
	int l_pos = pos - last_number;
	int h_pos = l_pos + 5;

	int ans1 = abs(pos - l_pos);
	int ans2 = abs(pos - h_pos);

	if (ans1 > ans2) cout << h_pos << '\n';
	else cout << l_pos << '\n';


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
