#include <stdio.h>

int main(){
	int n,i,k,p;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		for(i=0;k>10;++i,k/=10)
			if(k%10>=5)
				k+=10;
		printf("%d",k);
		while(i--)
			printf("0");
		printf("\n");
	}
	return 0;
}

