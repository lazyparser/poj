#include <stdio.h>

int main(){
		int n,x,y;
		scanf("%d",&n);
		while(n--){
				scanf("%d%d",&x,&y);
				if(y>x)
						printf("NO BRAINS\n");
				else
						printf("MMM BRAINS\n");
		}
		return 0;
}

