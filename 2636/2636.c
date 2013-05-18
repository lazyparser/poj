#include <stdio.h>

int main(){
	int n,m,k,sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		sum = 1 - m;
		while(m--){
			scanf("%d",&k);
			sum += k;
		}
		printf("%d\n",sum);
	}
	return 0;
}

