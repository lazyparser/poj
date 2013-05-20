/*
 * see http://poj.org/showmessage?message_id=88981
 *
 * GCC: WA
 * C++: AC
 *
 * 'double' should be convert to 'long long' to void
 * numerical error.
 * */
#include <stdio.h>

double a0,a1,a1n,c[3004];
int main(){
	int n,i;
	scanf("%d",&n);
	scanf("%lf%lf",&a0,&a1n);
	for(i=1;i<=n;i++)
		scanf("%lf",c+i);
	a1 = n * a0 + a1n;
	for(i=1;i<=n;i++)
		a1 -= 2*c[i]*(n+1-i);
	a1 = a1/(n+1);
	printf("%.2lf\n",a1);
	return 0;
}

