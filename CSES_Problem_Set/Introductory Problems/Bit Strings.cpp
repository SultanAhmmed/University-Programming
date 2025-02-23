#include<bits/stdc++.h>
 
using namespace std;
 
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define ll long long
const int mod = 1e9+7;
int main(){
	IO
	ll n;
	cin >> n;
	
	ll ans = 1;
	for(int i = 0; i < n; i++){
		ans =(ans* 2) % mod;
	}	
	cout << ans << '\n';
	return 0;
}
