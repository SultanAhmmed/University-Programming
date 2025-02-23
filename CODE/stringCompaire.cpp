#include<stdio.h>

void solve(){
	char s1[100];	scanf(" %[^\n]",s1);
	char s2[100];	scanf(" %[^\n]",s2);
	int flag=0;
	int s1len,s2len;
	for(s1len=0;s1[s1len]!='\0';s1len++);
	for(s2len=0;s2[s2len]!='\0';s2len++);
	if(s1len>s2len){
		for(int i=0;s1[i]!='\0';i++){
			(s1[i]==s2[i])?(flag = 1):(flag=0);
		}
	}
	else{
		for(int i=0;s2[i]!='\0';i++){
			(s2[i]==s1[i])?(flag = 1):(flag=0);
		}
	}
	(flag==1)?(printf("String 1 and String 2 are Equal.")):(printf("String 1 and String 2 are not Equla."));
	
}

int main(){
	solve();
	return 0;
}
