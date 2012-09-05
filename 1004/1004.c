#include<stdio.h>
int main(){
	float a=0,b;
	int i;
	for(i=0;i<12;i++){
		scanf("%f",&b);
		a+=b;
	}
	printf("$%.2f\n",a/12);
}

