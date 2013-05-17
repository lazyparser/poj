#include <stdio.h>
#include <string.h>

void rebuild(int n, char* pre, char* mid){
	int i,j;
	if(n==0)
		return;
	for(i=0; i<n && mid[i] != *pre;i++)
		;
	rebuild(i, pre+1, mid);
	rebuild(n-i-1, pre+i+1, mid+i+1);
	printf("%c",*pre);
}

int main(){
	char pre[32], mid[32];
	while(EOF!=scanf("%s%s",pre,mid)){
		rebuild(strlen(pre),pre,mid);
		printf("\n");
	}
	return 0;
}

