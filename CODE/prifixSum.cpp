#include<bits/stdc++.h>

/// Define turm
#define nn "\n"
#define ll long long

using namespace std;

void input(vector<ll>& ara,ll n){
    for(ll i = 0;i< n;++i){
        cin >> ara[i];
    }   
}

void prefixSum(vector<ll>& ara1,vector<ll>& ara2,ll n){
      ara2[0] = ara1[0];

     for(ll i = 1;i<n;++i){
        ara2[i] = ara2[i-1]+ ara1[i];
     }
}

void khele_dilam()
{
   /// Prefix Sum::--->

   ll n;   cin >> n;

   vector<ll> ara1(n),ara2(n);

   input(ara1,n);

  prefixSum(ara1,ara2,n);
  for(auto i : ara2){
    cout << " " << i;
  }
}





int main()
{

    khele_dilam();


}
