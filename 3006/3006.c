#include <stdio.h>
#include <math.h>

int isprime(long long v){
	long long i,half = (long long)(sqrt((double)v)+1);
	if(v==1)
		return 0;
	else if(v==2)
		return 1;
	else{
		for(i=2;i<half;i++)
			if(v%i==0)
				return 0;
		return 1;
	}
}

int main(){
	long long a,d,n,i,ad;
	scanf("%lld%lld%lld",&a,&d,&n);
	while(n){
		ad = a - d;
		i = 0;
		while(i<n){
			ad += d;
			if(isprime(ad))
				++i;
		}
		printf("%lld\n",ad);
		scanf("%lld%lld%lld",&a,&d,&n);
	}
	return 0;
}

