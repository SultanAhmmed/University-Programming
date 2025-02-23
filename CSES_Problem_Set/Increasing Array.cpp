/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int n;
	cin >> n;
	vector<ll>ara(n);
	for(auto &i:ara) cin >> i;

	ll ans = 0;
	for(ll i = 1; i<n;i++) {
		if(ara[i]<ara[i-1]){
			ll cnt = ara[i-1] - ara[i];
			ans+=cnt;
			ara[i] = ara[i-1];
		}
	}
	cout << ans << '\n';

}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
