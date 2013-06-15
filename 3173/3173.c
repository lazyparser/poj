#include <stdio.h>
int tri[32][32];

int main(){
	int n,s,i,j;
	scanf("%d%d",&n,&s);
	for(j=0;j<n;j++)
		for(i=0;i<=j;i++,s++)
			if(s<10)
				tri[i][j] = s % 10;
			else
				tri[i][j] = s = 1;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf("  ");
		for(j=i;j<n-1;j++)
			printf("%d ",tri[i][j]);
		printf("%d\n",tri[i][n-1]);
	}
	return 0;
}

