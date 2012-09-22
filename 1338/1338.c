#include <stdio.h>
typedef long long ll;
ll i2=1,i3=1,i5=1,ugly[1600],len=1;
void work(int k){
	ll n2,n3,n5,min;
	while(len<k){
		len++;
		n2=ugly[i2]*2;
		n3=ugly[i3]*3;
		n5=ugly[i5]*5;
		min = n2 > n3 ? n3 : n2 ;
		min = min > n5 ? n5 : min;
		ugly[len]=min;
		if(min == n2) i2++;
		if(min == n3) i3++;
		if(min == n5) i5++;
	}
	printf("%lld\n", ugly[k]);
}
int main(){
	int k;
	ugly[len]=1;
	scanf("%d",&k);
	while(k){
		work(k);
		scanf("%d",&k);
	}
	return 0;
}
