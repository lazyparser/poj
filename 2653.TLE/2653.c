#include <stdio.h>
#include <stdlib.h>
#define maxn 100008

float x1[maxn],y1[maxn],x2[maxn],y2[maxn],
	  a[maxn],b[maxn],c[maxn];
int sp,top[1024];

int intersect(int i, int j){
	float i1,i2,j1,j2,i12,j12;
	i1 = x1[i]*a[j]+y1[i]*b[j]+c[j];
	i2 = x2[i]*a[j]+y2[i]*b[j]+c[j];
	j1 = x1[j]*a[i]+y1[j]*b[i]+c[i];
	j2 = x2[j]*a[i]+y2[j]*b[i]+c[i];
	i12 = i1*i2;
	j12 = j1*j2;
	if(i12 < 0 && j12 < 0)
		return 1;
	else
		return 0;
}

int main(){
	int n,i,j;
	scanf("%d",&n);
	while(n){
		for(i=1;i<=n;i++){
			scanf("%f%f%f%f",x1+i,y1+i,x2+i,y2+i);
			a[i] = y1[i] - y2[i];
			b[i] = x2[i] - x1[i];
			c[i] = x1[i] * y2[i] - x2[i] * y1[i];
		}
		sp=0;
		for(i=n;i;--i){
			for(j=0;j<sp;++j)
				if(intersect(i,top[j]))
					break;
			if(j==sp)
				top[sp++]=i;
		}

		printf("Top sticks:");
		for(j=sp-1;j;--j)
			printf(" %d,",top[j]);
		printf(" %d.\n",top[0]);

		scanf("%d",&n);
	}
	return 0;
}

