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

	int n;
	cin >> n;
	vector<int>ans_ara;
	vector<int>ara(n);
	
	for(auto &i:ara) cin >> i;

	for(int i = 0; i < n-1;i++){
		if(abs(ara[i]-ara[i+1])==1){
			ans_ara.push_back(ara[i]);
		}

		else if(ara[i] < ara[i+1] && abs(ara[i] - ara[i+1]) > 1){
			while(1){
				int ans_in = ara[i]++;
				if(ans_in == ara[i+1]) break;
				ans_ara.push_back(ans_in);
			}
		}

		else if(ara[i] > ara[i+1] && ara[i] - ara[i+1] >1){
			while(1){
				int ans_in = ara[i]--;
				if(ara[i+1] == ans_in) break;
				ans_ara.push_back(ans_in);
			}
			
		}
	}
	ans_ara.push_back(ara.back());
	for(auto u : ans_ara) cout<< u << " " ; 
	cout << '\n';
}


int main() {
	optimised();
	// testCase()
		FrostMelon();

}
