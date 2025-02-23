#include<stdio.h>
#include<string.h>
void solve(){
	char s1[100];	scanf(" %[^\n]",s1);
	char s2[100];	scanf(" %[^\n]",s2);
	if(strcmp(s1,s2)==0) printf("String 1 and String 2 are equla.\n");
	else printf("String 1 and String 2 are not equal.\n");
}

int main(){
	solve();
	return 0;
}
