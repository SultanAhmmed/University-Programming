#include<stdio.h>
#include<string.h>



void solve() {
    char s[1000000];
    scanf(" %[^\n]",s);
    
    int cont = 0;
   
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i+1]!=' ') {
         cont++;   
        }
    }
    printf("%d\n", cont+1);
}

int main() {
   int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
