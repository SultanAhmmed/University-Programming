#include <iostream>
#define nn "\n"
#define ll long long

using namespace std;


void khelbo(){
	int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout << "*";
		}
		cout<<nn;
	}
}

int main()
{
	khelbo();
	return 0;
}
