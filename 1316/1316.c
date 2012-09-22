#include <stdio.h>
int self[10001];/*= {0,0,...}*/
int main(){
	int i,d,sum;
	for(i=1;i<10000;i++){
		sum = i;
		for(d=i;d;d/=10)
			sum += d%10;
		self[sum]=1;
	}
	for(i=1;i<10000;i++)
		if(!(self[i]))
			printf("%d\n",i);
}

