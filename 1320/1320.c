#include <stdio.h>
typedef long long ll;
int main(){
	ll i=0,my=6,all=8,diff=0;
	while(i<10){
		while(diff<0) diff += ++all;
		if(diff==0){
			printf("%10lld%10lld\n",my,all);
			i++;
		}
		diff -= (++my)*2-1;
	}
	return 0;
}

