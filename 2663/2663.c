/*
 * see http://poj.org/showmessage?message_id=125835
 * and http://poj.org/showmessage?message_id=121240
 * 
 * f[0]:=1
 * f[2]:=3
 * f[i]:=f[i-2]*4-f[i-4] (i>2) 
 * */
#include <stdio.h>
long long cache[16];
void calc(){
	int i,j;
	cache[0]=1;
	cache[1]=3;
	for(i=2;i<16;i++)
		cache[i] = cache[i-1]*4 - cache[i-2];
}

int main(){
	int n;
	scanf("%d",&n);
	calc();
	while(n>=0){
		if(n%2)
			printf("0\n");
		else
			printf("%lld\n",cache[n/2]);
		scanf("%d",&n);
	}
	return 0;
}

