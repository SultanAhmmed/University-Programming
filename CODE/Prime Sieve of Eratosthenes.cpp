#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

void primeSeive( int n )
{
    int primeAra[100] = {0};

    for(int i=2; i<=n; ++i)
    {
        if(primeAra[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                primeAra[j] = 1;
            }
        }
    }
    for(int i=2;i<=n;++i){
        if(primeAra[i]==0){
            cout << i << " ";
        }
    }cout << endl;
}

void dhorefel()
{

    int n;
    cin >> n;

    primeSeive(n);

}



int main()
{
    dhorefel();
}
