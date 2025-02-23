#include <iostream>
#define nn "\n"
#define ll long long

using namespace std;


void khelbo(){
	int cont =1;
	int n;	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << cont <<" ";
			cont++;
		}
		cout << nn;
	}
}

int main()
{
	khelbo();
	return 0;
}
