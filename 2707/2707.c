#include <stdio.h>

int max(int a,int b,int c,int d){
	double da = a,
		   db = b,
		   dc = c*100,
		   dd = d*100;
	double td = (dc*db<da*dd)?(dc/da):(dd/db),
		   lr = (dd*db<da*dc)?(dd/da):(dc/db);
	return td > lr ? (int)td : (int)lr;
}

int main(){
	int a,b,c,d,rlt;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	while(a){
		rlt = max(a,b,c,d);
		printf("%d%%\n",rlt>100?100:rlt);
		scanf("%d%d%d%d",&a,&b,&c,&d);
	}
	return 0;
}

