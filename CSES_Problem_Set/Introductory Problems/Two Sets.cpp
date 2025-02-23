#include<bits/stdc++.h>
 
using namespace std;
 
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define ll long long
 
int main(){
	IO
	ll n;
	cin >> n;
 
	ll sum = n*(n+1)/2;
	// cout << sum << '\n';
 
	if(sum & 1){
		cout << "NO" << '\n';
		return 0;
	}
	
	vector<ll>ara1,ara2;
	ll tmp = sum / 2;
	
	while(n){
		if(tmp - n >= 0){
			ara1.push_back(n);
			tmp = tmp - n;
		}
		else{
			ara2.push_back(n);
		}
		n--;
	}
 
	cout << "YES" << '\n';
 
	cout << ara1.size() << '\n';
	for(auto u : ara1)
		cout << u << " ";
	cout << '\n';
 
	cout << ara2.size() << '\n';
	for(auto u : ara2)
		cout << u << " ";
	cout << '\n'; 
	
	return 0;
}
