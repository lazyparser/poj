#include <stdio.h>
typedef long long ll;
void work(ll n){
	ll i,w,len=0,seq[128];
	printf("%lld [",n);
	for(i=31;n && i;i--){
		w=(1<<i)-1;
		while(n>=w){
			seq[len++]=i-1;
			n-=w;
		}
	}
	if(len){
		printf("%lld",seq[len-1]);
		for(i=len-2;i>=0;i--){
			printf(",%lld",seq[i]);
		}
	}
	printf("]\n");
}
int main(){
	ll n,k;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&k);
		work(k);
	}
	return 0;
}
