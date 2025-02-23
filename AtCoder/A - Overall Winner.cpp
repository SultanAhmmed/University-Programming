#include <iostream>
#include <string>

#define ll long long

using namespace std;

void solve() {

  int length;
  string gameBoard;
  cin >> length >> gameBoard;

  int cnt_T = 0, cnt_A = 0;
  for (int i = 0; i < length; i++) {
    if (gameBoard[i] == 'T')
      cnt_T++;
    else
      cnt_A++;
  }
  if (cnt_T == cnt_A)
    cout << ((gameBoard[length - 1] == 'T') ? "A" : "T") << '\n';
  else if (cnt_T > cnt_A)
    cout << 'T' << '\n';
  else
    cout << 'A' << '\n';
}

int main() {

  solve();
  return 0;
}
