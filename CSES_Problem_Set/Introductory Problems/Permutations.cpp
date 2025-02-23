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
	int n; cin >> n;
	if(n == 1) cout << 1;
	else if(n < 4) cout << "NO SOLUTION" << '\n';
	else if(n == 4) cout << "3 1 4 2" << '\n';
	else {
		for(int i = 1; i <= n;i = i + 2) {
			cout << i << " ";
		}
		for(int i = 2; i <= n; i = i + 2){
			cout << i << " ";
		}
	} cout << '\n';
}


int main() {
	optimised();
	// testCase()
		FrostMelon();
}
