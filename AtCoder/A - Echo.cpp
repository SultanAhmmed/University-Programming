#include <bits/stdc++.h>

#define ll long long
//#define vi vector<int>
using namespace std;

void solve() {

	int length;
	cin >> length;

	string s;
	cin >> s;
	for (int i = 0; i < length; ++i) {
		cout << s[i] << s[i];
	}
	cout << '\n';


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	solve();
}
