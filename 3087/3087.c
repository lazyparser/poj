#include <stdio.h>
#include <string.h>

char s[256],shuff[2][256],t[256];

int main(){
	int n,c,i,j,cnt,from,to;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&c);
		scanf("%s%s%s",s,s+c,t);
		strncpy(shuff[0],s,c+c+1);
		from = 0; to = 1;
		for(cnt=0;strncmp(shuff[from],t,c+c);++cnt){
			for(j=0;j<c;j++){
				shuff[to][j+j+1] = shuff[from][j];
				shuff[to][j+j] = shuff[from][c+j];
			}
			if(0==strncmp(shuff[to],s,c+c))
				break;
			from = 1 - from; to = 1 - to;
		}
		printf("%d %d\n",i, strncmp(shuff[from],t,c+c) == 0 ? cnt : -1);
	}
	return 0;
}

