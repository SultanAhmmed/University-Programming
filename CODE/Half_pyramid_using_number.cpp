#include <iostream>
#define nn "\n"
#define ll long long

using namespace std;


void khelbo(){
	int n;	cin>>n;

	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <=i; ++j)
		{
			cout << i <<" ";
		}
		cout << nn;
	}
}

int main()
{
	khelbo();
	return 0;
}
