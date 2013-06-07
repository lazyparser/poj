#include <stdio.h>

int main(){
	int n,i,pre,cur;
	scanf("%d",&n);
	while(n){
		pre = -1;
		for(i=0;i<n;i++){
			scanf("%d",&cur);
			if(pre!=cur){
				printf("%d ",cur);
				pre = cur;
			}
		}
		printf("$\n");
		scanf("%d",&n);
	}
	return 0;
}

