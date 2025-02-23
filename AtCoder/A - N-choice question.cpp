#include <iostream>
#include <string>

#define ll long long

using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  int total = a + b;
  int i;
  for (i = 1; i <= n; i++) {
    int checker;
    cin >> checker;
    if (checker == total)
      break;
  }
  cout << i << '\n';
}

int main() {

  solve();
  return 0;
}
