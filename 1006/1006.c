#include<stdio.h>
int main(){
	int p,e,i,d,n,j;
	for(j=1;;++j){
		scanf("%d%d%d%d",&p,&e,&i,&d);
		if(p<0)break;
		p%=23;e%=28;i%=33;
		n=i;
		while(n<p||n<e)n+=33;
		while((n-p)%23||(n-e)%28)n+=33;
		if(n<=d)n+=21252;
		printf("Case %d: the next triple peak occurs in %d days.\n",j,n-d);
	}
}

