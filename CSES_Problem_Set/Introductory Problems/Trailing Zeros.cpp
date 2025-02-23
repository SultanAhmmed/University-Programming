/**********************************
        --------------------------
    Bismillahir Rahmanir Rahim
---------------------------
 
**********************************/
#include <bits/stdc++.h>
 
using namespace std;
 
#define eb emplace_back
#define pb push_back
 
#define int	long long
#define all(a) 	a.begin(), a.end()
#define sz(x) (int)x.size()
 
#define vint vector<int>
#define vs vector<string>
#define pint pair<int,int>
#define vpint vector<pair<int,int>>
#define sint set<int>
#define vsint vector<set<int>>
#define mint map<int,int>
	
 
#define yes cout << "YES" << '\n'
#define no	cout << "NO" << '\n' 
#define sum_ara(a) accumulate(a.begin(), a.end(), 0ll)
 
#define POINTS() cout << fixed << setprecision(6);
#define Fast_IO() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
/******************************-[FrostMelon]-**************************************/
 
void solve() {
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 5; i<=n; i *= 5){
		ans += n/i;
	}	
 
	cout << ans << '\n';
 
}		
signed main() {
	Fast_IO()
    int tc = 1;
    // cin >> tc;
    for(int i = 1; i <= tc; i++){
    	// cout << "Case " << i << ": ";
    	solve();
    }
}
