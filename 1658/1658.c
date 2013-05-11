#include <stdio.h>

int main(){
	int t,a,b,c,d,e;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("%d %d %d %d ",a,b,c,d);
		if( a+d == b+c )
			printf("%d\n",d+d-c);
		else
			printf("%d\n",(d*d)/c);
	}
	return 0;
}
