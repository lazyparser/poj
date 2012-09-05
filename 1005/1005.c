#include<stdio.h>
int main(){
	int n,i,year;
	float x,y;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%f%f",&x,&y);
		for(year=1;100*year<3.1415926*(x*x+y*y);++year);
		printf("Property %d: This property will begin eroding in year %d.\n",i,year);
	}
	printf("END OF OUTPUT.\n");
}
