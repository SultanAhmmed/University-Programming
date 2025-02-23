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
  string s;
  cin >> n >> s;
  set<int>ara;
  for(int i= 0; i < n;i++){
    ara.insert(s[i]);
    if(ara.size() == 3){
      cout << i + 1 << '\n';
      break;
    }
  }
}
int main() {
	optimised();
	// testCase()
		FrostMelon();
}
