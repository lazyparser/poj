#include <stdio.h>

int main(){
	long long n,sum,last,base;
	scanf("%lld",&n);
	while(n){
		printf("%lld: ",n);
		base=1;
		sum=0;
		while(n){
			last = (n%10)>4?n%10-1:n%10;
			sum += last*base;
			base*=9;
			n/=10;
		}
		printf("%lld\n",sum); 
		scanf("%lld",&n);
	}
	return 0;
}

