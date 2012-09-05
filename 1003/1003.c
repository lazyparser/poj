#include<stdio.h>
int main(){
	float l,sum=0;
	int n=1;
	scanf("%f",&l);
	while(l>0.001){
		sum=0.0;n=1;
		while(sum<l)
			sum+=1/(float)++n;
		printf("%d card(s)\n",n-1);
		scanf("%f",&l);
	}
}
