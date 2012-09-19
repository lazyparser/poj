#include <stdio.h>
int main(){
	int a,b,begin,end,max,steps,tmp,i,j;
	while(2==scanf("%d%d",&a,&b)){
		max=0;
		if(a>b){
			begin = b;
			end = a;
		}else{
			begin = a;
			end = b;
		}
		for(i=begin;i<=end;i++){
			steps=1;
			tmp=i;
			while(tmp!=1){
				if(tmp%2)
					tmp+=tmp+tmp+1;
				else
					tmp>>=1;
				++steps;
			}
			if(steps>max)max=steps;
		}
		printf("%d %d %d\n",a,b,max);
	}
	return 0;
}

