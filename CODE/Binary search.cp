#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	int find_Number;
	cin >> find_Number;

	vector<int>ara(7);

	for (auto &i : ara) {

		cin >> i;
	}


	int lower = 0;	int heigher = ara.size() - 1;

	while (lower <= heigher) {

		int mid = (lower + heigher) / 2;

		if (ara[mid] == find_Number) {
			cout << "Found Number. Position of the number: " << mid << '\n';
			break;
		}

		if (ara[mid] > find_Number) heigher = mid - 1;
		else lower = mid + 1;
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
