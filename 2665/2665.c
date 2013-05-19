#include <stdio.h>

int main(){
	int l,m,start,end,trees;
	scanf("%d%d",&l,&m);
	while(l&&m){
		trees = l + 1;
		while(m--){
			scanf("%d%d",&start,&end);
			trees -= end - start + 1;
		}
		printf("%d\n",trees);
		scanf("%d%d",&l,&m);
	}
	return 0;
}

