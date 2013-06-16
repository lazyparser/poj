#include <stdio.h>

int cows[512][512];
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
			scanf("%d",&cows[i][j]);
	for(i=n-2;i>=0;--i)
		for(j=0;j<=i;j++)
			cows[i][j] = cows[i+1][j] > cows[i+1][j+1] ?
				cows[i][j] + cows[i+1][j] :
				cows[i][j] + cows[i+1][j+1];
	printf("%d\n",cows[0][0]);
	return 0;
}

