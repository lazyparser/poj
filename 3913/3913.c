#include <stdio.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	printf("Gnomes:\n");
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		if( (a<=b && b<=c) || (a>=b && b>=c) )
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
	return 0;
}

