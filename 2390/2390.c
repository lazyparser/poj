#include <stdio.h>
int main(){
	int r,m,y,i,rlt;
	double fr,total;
	scanf("%d%d%d",&r,&m,&y);
	fr = 1 + (double)r/100;
	total = (double)m;
	while(y--) total *= fr;
	printf("%d\n",(int)total);
}

