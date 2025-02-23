#include<stdio.h>

void solve() {
    int n,m; scanf("%d%d",&n,&m);
    for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main() {
        solve();
    return 0;
}
