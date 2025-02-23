#include<bits/stdc++.h>

using namespace std;

int binarrytoDecimel(int n){
  
  int ans  = 0; 
  int x = 1;
  
  while(n>0){
    
    int rem = n%10;
    ans  += x*rem;
    x *= 2;
    n /=10; 
  }
  return ans;
}


int main(){
  
  int n; cin >> n; 
  cout << binarrytoDecimel(n) << endl;
    
}
