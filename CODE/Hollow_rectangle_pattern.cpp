#include <iostream>
#define nn "\n"
#define ll long long

using namespace std;


void khelbo(){
	int raw,col;
	cin >> raw >> col;
	for(int i=1;i<=raw;i++){
		for(int j=1;j<=col;j++){
			if(i==1||i==raw||j==1||j==col){
				cout <<"*";
			}
			else{
				cout << " ";
			}
		}
		cout << nn;
	}
}

int main()
{
	khelbo();
	return 0;
}
