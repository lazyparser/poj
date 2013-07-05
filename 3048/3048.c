#include <stdio.h>

int sp,p[20000];
int maxfactor(int n){
	int i,max;
	if(n==1) return 1;
	for(i=0;i<sp && p[sp]<=n;i++)
		if(n%p[i]==0)
			max=i;
	return p[max];
}
void init(){
	int i,j;
	sp = 1;
	p[0] = 2;
	for(i=3;i<20008;i+=2){
		for(j=0;j<sp;j++)
			if(i%p[j]==0)
				break;
		if(j==sp)
			p[sp++] = i;
	}
}

int main(){
	int n,k,mk,f,mf=0;
	init();
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		f = maxfactor(k);
		if(mf<f){
			mf=f;
			mk=k;
		}
	}
	printf("%d\n",mk);
	return 0;
}

