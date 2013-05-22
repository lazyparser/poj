/* KMP */
#include <stdio.h>
char w[10008],t[1000008];
int kmp[10008];

int solve(char* sub, char* str){
	int i,j,count = 0;
	kmp[0]=-1;
	j=-1;
	for(i=1;sub[i];i++){
		while(j>=0 && sub[j+1]!=sub[i])
			j = kmp[j];
		if(sub[j+1]==sub[i])
			++j;
		kmp[i] = j;
	}
	j=-1;
	for(i=0;str[i];i++){
		while(j>=0 && sub[j+1]!=str[i])
			j = kmp[j];
		if(sub[j+1]==str[i])
			++j;
		if(!sub[j+1]){
			++count;
			j = kmp[j];
		}
	}
	return count;
}

int main(){
	int n,i,j;
	scanf("%d",&n);
	while(n--){
		scanf("%s%s",w,t);
		printf("%d\n",solve(w,t));
	}
	return 0;
}

