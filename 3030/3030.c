#include <stdio.h>

int main(){
	int n,r,e,c;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&r,&e,&c);
		if(r+c>e)
			printf("do not advertise\n");
		else if(r+c==e)
			printf("does not matter\n");
		else
			printf("advertise\n");
	}
	return 0;
}

