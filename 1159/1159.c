/* DP */
#include <stdio.h>
#include <stdlib.h>
int ans[3][5000];
char s[5001];
int i,j,len,n;
int main(){
	scanf("%d",&n);
	scanf("%s",s);
	for(len=1;len<n;len++){
		for(i=0;i+len<n;i++){
			if(s[i]==s[i+len]){
				if(len<2) ans[i%3][i+len] = 0;
				else ans[i%3][i+len] = ans[(i+1)%3][i+len-1];
			}else{
				ans[i%3][i+len] = ans[i%3][i+len-1] < ans[(i+1)%3][i+len] ?
					ans[i%3][i+len-1]+1:ans[(i+1)%3][i+len]+1;
			}
		}
	}
	printf("%d\n",ans[0][n-1]);
}

