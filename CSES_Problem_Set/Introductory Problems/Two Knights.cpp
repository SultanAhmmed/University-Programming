#include<bits/stdc++.h>
 
using namespace std;
 
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define ll long long
 
int main(){
	IO
	int n;
	cin >> n;
 
	for(int i = 1; i <= n; i++){
 		ll k1 = i * i;
 		ll k2 = k1 - 1;
 		ll k3 = i - 1;
 		ll k4 = i - 2;
 
 		ll ans = ((k1*k2)/2)- (4*k3*k4);
 
 		cout << ans << '\n';
	}
}
