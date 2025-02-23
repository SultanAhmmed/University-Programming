#include<iostream>
#define ll long long
#define endl "\n"
#define str string

using namespace std;
int main(){
	int t;	cin >> t;
	while(t--){
		int len; cin >> len;
		str s;	cin >> s;
		
		//getchar();
		int trace[len];
		for(int i=0;i<len;++i){
			trace[i]=-1;
		}
		for(int i =0;i<len;i++){
			if(s[i]==s[0]){
				trace[i]=0;
			}
		}
		for(int i=1;i<len;i++){
			if(trace[i]==-1){
				int bosabo;
				if(trace[i-1]==0){
					bosabo = 1;
				}
				else{
					bosabo=0;
				}
				for(int j=i;j<len;j++){
					if(s[j]==s[i]){
						trace[j]=bosabo;
					}
				}
			}
		}
		int flag =1;
		for(int i=1;i<len;i++){
			if(trace[i]==trace[i-1]){
				flag =0;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout << "NO"<<endl;
		}
	}
}
