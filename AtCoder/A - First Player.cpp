#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define INT_MA 2147483647
using namespace std;
void solve()
{

    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<string>name(n);
    ll minx =INT_MA;
    int pos=0;
    for(int i=0; i<n; ++i)
    {
        cin >> name[i] >> a[i];
        if(minx>a[i])
        {
            pos = i;
            minx=a[i];
        }
    }
    for(int i =0 ; i<n; ++i)
    {
        cout << name[pos++] <<nl;
        if(pos==n)pos=0;
    }

}

int main()
{
    solve();
}
