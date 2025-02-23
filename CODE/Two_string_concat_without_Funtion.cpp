#include<stdio.h>

void solve() {
	char s1[10] = "Hello ";
	char s2[10] = "World";
	
	int len,len2;
	
	for(len=0;s1[len]!='\0';len++);
	for(len2 =0;s2[len2]!='\0';len2++);
	
	for(int i=0;i<len2;i++){
		s1[len+i]=s2[i];
	}
	s1[len + len2]='\0';
	printf("%s",s1);
}
int main() {
    solve();
    return 0;
}
