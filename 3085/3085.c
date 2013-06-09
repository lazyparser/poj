#include <stdio.h>

int main(){
	int N,c,i,q,d,n,p;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d",&c);
		for(q=0;c>=25;q++) c-=25;
		for(d=0;c>=10;d++) c-=10;
		for(n=0;c>=5;n++) c-=5;
		p = c;
		printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",
				i,q,d,n,p);
	}
	return 0;
}

