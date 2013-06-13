#include <stdio.h>
#include <math.h>

int main(){
	int b,n,a;
	scanf("%d%d",&b,&n);
	while(b&&n){
		a = (int)pow(1.0*b,1.0/n);
		if( b - pow(a,n) >= pow(a+1,n) - b )
			++a;
		printf("%d\n",a);
		scanf("%d%d",&b,&n);
	}
	return 0;
}

