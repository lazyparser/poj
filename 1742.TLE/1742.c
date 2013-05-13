#include <stdio.h>
#include <string.h>
#define maxm 100001
int flags[maxm];
int main(){
	int n,m,a[128],c[128],i,j,k,sum;
	scanf("%d%d",&n,&m);
	while(n||m){
		memset(flags,0x00,sizeof(int)*maxm);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		for(i=0;i<n;i++)
			scanf("%d",c+i);
		flags[0] = 1;
		for(i=0;i<n;i++){
			for(j=0;j<c[i];j++){
				for(k=m;k>=0;--k){
					if(flags[k] && k+a[i] < maxm)
						flags[k+a[i]] = 1;
				}
			}
		}
		for(sum=0,k=1;k<=m;k++){
			sum += flags[k];
		}
		printf("%d\n",sum);
		scanf("%d%d",&n,&m);
	}
	return 0;
}

