#include <stdio.h>
#define maxn 10008
int p[maxn],sp;
void pre_calc(){
	int i,j;
	p[0]=2;
	sp=1;
	for(i=3;i<maxn;i+=2){
		for(j=0;j<sp;++j)
			if(i%p[j]==0)
				break;
		if(j==sp)
			p[sp++] = i;
	}
}

int find_all(int n){
	int b = 0, e = 0, sum = 2, count = 0;
	while (b<=e && e<sp && p[e]<=n){
		if(sum <= n){
			if(sum==n)
				++count;
			++e;
			sum += p[e];
		}else{
			sum -= p[b];
			++b;
		}
	}
	return count;
}

int main(){
	int n;
	pre_calc();
	scanf("%d",&n);
	while(n){
		printf("%d\n",find_all(n));
		scanf("%d",&n);
	}
	return 0;
}

