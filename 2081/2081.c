/* cache + bitmap */
#include <stdio.h>

int bits[25000000];
long long a[500001];
int sp = 1;

int main(){
	int k;
	bits[0] = 1;
	scanf("%d",&k);
	while(k>=0){
		while(sp<=k){
			a[sp] = a[sp-1] - sp;
			if(a[sp]<0 || bits[a[sp]])
				a[sp] = a[sp-1] + sp;
			bits[a[sp]] = 1;
			++sp;
		}
		printf("%lld\n",a[k]);

		scanf("%d",&k);
	}
	return 0;
}
