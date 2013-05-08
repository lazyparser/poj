#include <stdio.h>
int main(){
	int n,s,t;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&s,&t);
		if((s+t)%2 || t > s)
			printf("impossible\n");
		else
			printf("%d %d\n",(s+t)/2,(s-t)/2);
	}
	return 0;
}
