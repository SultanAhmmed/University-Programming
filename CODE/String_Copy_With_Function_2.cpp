#include<stdio.h>
#include<string.h>
void solve() {
	char s1[100];
	char s2[100];
	
	printf("Enter the line:\n");
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	
	strncpy(s1,s2,10);
	printf("String s1 is: %s",s1);
}
int main() {
    solve();
    return 0;
}
