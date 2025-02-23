#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int bigMod( int base, int power, int mod )
{

    if(power==0){ return 1;}
    else if(power%2==1){
        int a = base%mod;
        int b = (bigMod(base,power-1,mod))%mod;
        return (a*b)%mod;
    }
    else if(power %2==0){
        int a = (bigMod(base,power/2,mod))%mod;
        return (a*a)%mod;
    }
}

void dhorefel()
{
    int base,power,mod;
    cin >> base >> power >> mod;
    cout << bigMod(base,power,mod) << endl;

}



int main()
{
    dhorefel();
}
