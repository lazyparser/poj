#include <stdio.h>
int main () {
	int k,id,j,m,n,offset,ans[14];
	for(k=1;k<14;k++){
		n=k+k;
		for(m=k+1;;m++){
			if(m % n == 1)
				m += k;
			for(j=0,offset=0;j<k;j++){
				id = (m - offset) % (n - j);
				if(id==0)
					id=n-j;
				if(id<=k)
					break;
				offset=(n-j)-id;
			}
			if(j==k){
				ans[k] = m;
				break;
			}
		}
	}
	scanf("%d",&k);
	while(k){
		printf("%d\n",ans[k]);
		scanf("%d",&k);
	}
	return 0;
}
