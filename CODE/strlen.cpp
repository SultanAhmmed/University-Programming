#include<stdio.h>

int solve(char*p){
	int count = 0;
	while(*p !='\0'){
		count++;
		p++;
	}
	return count;
}

int main(){
	char s[1000]; scanf(" %[^\n]",s);
	int length = solve(s);
	printf("%d\n",length);
	return 0;
}
