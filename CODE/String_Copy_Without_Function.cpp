#include<stdio.h>
#include<string.h>
void solve() {
	char s1[100];
	char s2[100];
	
	printf("Enter the line: ");
	fgets(s1,sizeof(s1),stdin);
	
	int i;
	for(i=0;s1[i]!='\0';i++){
		s2[i] = s1[i];
	}
	s2[i]='\0';
	printf("%s\n",s2);
}
int main() {
    solve();
    return 0;
}
