#include <stdio.h>

int main(){
	int n,i,k,hk,h1,h2;
	scanf("%d",&n);
	while(n){
		k = hk = 0;
		for(i=0;i<n;i++){
			scanf("%d%d",&h1,&h2);
			if(h1+h2>8 && hk<h1+h2){
				k = i+1;
				hk = h1 + h2;
			}
		}
		printf("%d\n",k);
		scanf("%d",&n);
	}
	return 0;
}

