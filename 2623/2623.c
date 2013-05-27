/*
 * You should print the value of the median with exactly one digit after decimal point.
 * -- even if the result is integer!
 * */
#include <stdio.h>
long long data[250000];
int cmpr(const void* l, const void* r){
	return *(long long *)l - *(long long*)r;
}

int main(){
	int n,i;
	long long ml,mr;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lld",data+i);
	qsort(data,n,sizeof(long long),cmpr);
	if(n%2){
		printf("%lld.0\n",data[(n-1)/2]);
	}else{
		ml = data[n/2-1];
		mr = data[n/2];
		if((ml%2) == (mr%2))
			printf("%lld.0\n",ml%2+ml/2+mr/2);
		else
			printf("%lld.5\n",ml/2+mr/2);
	}
	return 0;
}

