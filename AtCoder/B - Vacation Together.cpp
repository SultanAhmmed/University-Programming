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
 int n,m;
  cin >> n >> m;
  char ara[103][103];
  for(int i = 0;i < n;i++)
    for(int j = 0; j < m;j++)
    {
      cin >> ara[i][j];
    }
  int ans = 0,cmp = 0;
  for(int j = 0;j < m;j++){
    int cnt = 0;
    for(int i = 0;i < n;i++) {
      if(ara[i][j] == 'o')cnt++;
    }
    
    if(cnt == n)cmp++;
    else cmp = 0;
    ans = max(ans,cmp);
  }
  cout << ans << '\n';
}
int main() {
	optimised();
	// testCase()
		FrostMelon();
}
