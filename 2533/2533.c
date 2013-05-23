/* DP */
#include <stdio.h>
int dp[1024],a[1024];

int main(){
	int n,i,j,max;
	scanf("%d",&n);
	for(i=0;i<n;++i)
		scanf("%d",a+i);
	for(i=0;i<n;++i){
		dp[i] = 1;
		for(j=0;j<i;++j)
			if(a[i] > a[j] && dp[i] < dp[j]+1)
				dp[i] = dp[j] + 1;
	}
	/*
	for(i=0;i<n;++i)
		printf("%d,",dp[i]);
	printf("\n");
	*/
	for(max=i=0;i<n;++i)
		if(max<dp[i])
			max=dp[i];
	printf("%d\n",max);
	return 0;
}


