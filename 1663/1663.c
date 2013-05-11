#include <stdio.h>

int main(){
	int n,x,y;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&x,&y);
		if( x == y || x == y + 2)
			printf("%d\n",(x-y)+4*(y/2)+y%2);
		else
			printf("No Number\n");
	}
	return 0;
}
