#include<bits/stdc++.h>

/// Define turm
#define nn "\n"
#define ll long long

using namespace std;


void khele_dilam()
{
  int t,a,c;
  cin >> t >> a >> c;

  if(c == 0) {
    if(t > a){
        cout << "Takahashi" << nn;
    }
    else{
        cout << "Aoki" << nn;
    }
  }
  else {
    if(a > t){
        cout << "Aoki" << nn;
    }
    else{
        cout << "Takahashi" << nn;
    }
  }
}





int main()
{

    khele_dilam();


}
