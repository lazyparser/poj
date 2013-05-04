#include <stdio.h>

int main(){
		int i,n,s,t,sum,tstart=0;
		scanf("%d",&n);
		while(n>0){
				tstart=sum=0;
				for(i=0;i<n;i++){
						scanf("%d%d",&s,&t);
						sum += s * (t - tstart);
						tstart = t;
				}
				printf("%d miles\n",sum);
				scanf("%d",&n);
		}
		return 0;
}

				

