#include <stdio.h>

int count(int m, int n, int max){
	int k = 0,i,j;
	if(max>m) max=m;
	if(max<0 || m<0 || n<0)
		return 0;
	if(m==0){
		k = 1;
	}else if(n==0){
		k = 0;
	}else{
		for(i=max;i>0;--i){
			for(j=1;i*j<=m;j++){
				k += count(m-i*j, n-j, i-1);
			}
		}
	}
	return k;
}

int main(){
	int t, m, n;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		printf("%d\n",count(m,n,m));
	}
	return 0;
}

