#include <stdio.h>
int mod(int n, int m){
	return n % m;
}
int main(){
	int n,m;
	while(EOF!=scanf("%d%d",&n,&m))
		printf("%d\n",mod(n,m));
	return 0;
}

