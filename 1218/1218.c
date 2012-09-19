#include <stdio.h>
int main(){
	int N,n,i,j,total,cell[101];
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		total=0;
		for(i=0;i<n;i++){
			cell[i]=1;
		}
		for(i=2;i<n+1;i++){
			for(j=i;j<n+1;j+=i){
				cell[j-1]=cell[j-1]?0:1;
			}
		}
		for(i=0;i<n;i++){
			total+=cell[i];
		}
		printf("%d\n",total);
	}
}

