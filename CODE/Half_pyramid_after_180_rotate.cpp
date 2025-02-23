#include <iostream>
#define nn "\n"
#define ll long long

using namespace std;


void khelbo(){
	int n;	cin>>n;

	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			if(j<=n-i){
				cout << " ";
			}
			else{
				cout << "*";
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
