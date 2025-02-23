/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define inf 		1e9+7
#define gcd(a,b)	 __gcd(a,b)
#define lcm(a,b) 	(a*b)/gcd(a,b)
#define rev(v) 		reverse(v.begin(), v.end())
#define asort(v) 	sort(v.begin(), v.end())
#define forn(a,b)	for(int i = a;i < (b);++i)
#define forR(a,b)	for(int i = a;i < (b);--i)
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int a, b, c, d, e, f;
	vector<int>ara(3);
	vector<int> ara2(3);
	for(int i = 0; i < 3;i++) cin >> ara[i];
	for(int i = 0; i < 3;i++) cin >> ara2[i];

	sort(ara.begin(),ara.end());
	sort(ara2.begin(),ara2.end());
	if (ara[0] == ara2[0] && ara[1] == ara2[1] && ara[2] == ara2[2] && ara[0]*ara[0] + ara[1]*ara[1] == ara[2]*ara[2])
		cout << "YES" << '\n';
	else cout << "NO" << '\n';
	
}

int main() {
	optimised();
	// testCase()
		FrostMelon();
}
