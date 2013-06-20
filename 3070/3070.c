#include <stdio.h>

void mul(int a[2][2], int b[2][2], int c[2][2]){
	int i,j,k;
	c[0][0] = c[0][1] = c[1][0] = c[1][1] = 0;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			for(k=0;k<2;k++)
				c[i][j] = (c[i][j] + a[i][k]*b[k][j])%10000;
}


int main(){
	int n,i,fpre[2][2],fn[2][2],f[32][2][2];
	f[0][0][0] = f[0][0][1] = f[0][1][0] = 1;
	f[0][1][1] = 0;
	for(i=0;i<31;i++)
		mul(f[i],f[i],f[i+1]);
	scanf("%d",&n);
	while(n>=0){
		fn[0][0] = fn[1][1] = 1;
		fn[0][1] = fn[1][0] = 0;
		for(i=0;n;++i){
			fpre[0][0] = fn[0][0];
			fpre[0][1] = fn[1][0];
			fpre[1][0] = fn[1][0];
			fpre[1][1] = fn[1][1];
			if(n%2)
				mul(fpre,f[i],fn);
			n/=2;
		}
		printf("%d\n",fn[0][1]);

		scanf("%d",&n);
	}
	return 0;
}

