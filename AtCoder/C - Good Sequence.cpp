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
	map<int,int>cnt;
	int n;
	cin >> n;
	int a;
	for(int i = 0;i < n; i++){
		cin >> a;
		cnt[a]++;
	}

	int ans = 0;
	for(auto u : cnt){
		if(u.second>=u.first) ans+=(u.second - u.first);
		else ans+=u.second;
	}
	cout << ans << '\n';
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
