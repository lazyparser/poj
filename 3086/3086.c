#include <stdio.h>

int main(){
	int t[302],N,n,w,i,j;
	scanf("%d",&N);
	for(i=1;i<302;i++)
		t[i] = (i*(i+1))/2;
	for(i=1;i<=N;i++){
		scanf("%d",&n);
		for(w=0,j=1;j<=n;j++)
			w += j*t[j+1];
		printf("%d %d %d\n",i,n,w);
	}
	return 0;
}

