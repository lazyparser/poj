#include <stdio.h>
#include <math.h>
int main(){
	int a,b,tmp,k,a_lose;
	while(2==scanf("%d%d",&a,&b)){
		if(a>b){tmp=a;a=b;b=tmp;}
		k = b-a;
		/* 2012-9-11
		 * Found the mysterious formula here
		 * http://blog.csdn.net/manio/article/details/589172
		 */
		if(a==(int)(k*(1.0+sqrt(5))/2.0)){
			printf("%d\n",0);
		}else{
			printf("%d\n",1);
		}
	}
}

