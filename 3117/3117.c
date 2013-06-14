#include <stdio.h>

int main(){
	int t,n,s,diff;
	char team[32];
	scanf("%d%d",&t,&n);
	while(t){
		diff = 3 * n;
		while(t--){
			scanf("%s%d",team,&s);
			diff -= s;
		}
		printf("%d\n",diff);
		scanf("%d%d",&t,&n);
	}
	return 0;
}

