#include<stdio.h>
#include<string.h>
void solve() {
	char s1[10] = "Hello ";
	char s2[10] = "World";
	
	strncat(s1,s2,3);
	
	printf("%s\n",s1);
}
int main() {
    solve();
    return 0;
}
