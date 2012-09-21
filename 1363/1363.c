#include <stdio.h>
void solve(int n,int seq[1024]){
	int queue = 1;
	int stack[1024];
	int top=0;
	int i, j, t;
	for(i=0;i<n;i++){
		t = seq[i];
		if(top && stack[top-1] == t){
			--top;
		}else{
			for(j=0;j<top-1;j++){
				if(stack[j] == t){
					printf("No\n");
					return;
				}
			}
			while(queue <= t){
				stack[top++]=queue++;
			}
			--top;/*pop seq[i]*/
		}
	}
	printf("Yes\n");
}
int main(){
	int n, i, seq[1204];
	scanf("%d",&n);
	while(n){
		scanf("%d",&seq[0]);
		while(seq[0]){
			for(i=1;i<n;i++)
				scanf("%d",seq+i);
			solve(n,seq);
			scanf("%d",&seq[0]);
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
