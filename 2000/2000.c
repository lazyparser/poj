#include <stdio.h>
int solve(int n){
		int i, total = 0;
		for(i = 1;n>=i;i++){
				total += i*i;
				n -= i;
		}
		total += i*n;
		return total;
}


int main(){
		int n;
		scanf("%d",&n);
		while(n){
				printf("%d %d\n",n,solve(n));
				scanf("%d",&n);
		}
		return 0;
}

				


