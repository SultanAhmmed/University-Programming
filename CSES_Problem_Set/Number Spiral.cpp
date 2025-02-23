#include<bits/stdc++.h>
 
using namespace std;
 
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define ll long long
 
int main(){
	IO
	int tc;
	cin >> tc;
 
	while(tc--){
		ll r,c,ans;
		cin >> r >> c;
		if(c > r){
			if(c&1)
				ans = c*c + 1 - r;
			else 
				ans = (c - 1) * (c - 1) + r;
		}
 
		else{
			if(r&1)
				ans = (r - 1) * (r - 1) + c;
			else
				ans = (r*r) + 1 - c;
			
		}
		cout << ans << '\n';
	}
}
