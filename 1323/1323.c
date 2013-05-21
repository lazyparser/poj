#include <stdio.h>
#include <stdlib.h>
int cmpr( const void* p1, const void* p2 ){
	return *(const int *)p2 - *(const int *)p1;
}
int main(){
	int m,n,i,cnt,max,lose,wins;
	int cards[64];
	scanf("%d%d",&m,&n);
	for(cnt=1; n|m; ++cnt){
		for(i=0;i<n;++i)
			scanf("%d",cards+i);
		qsort(cards,n,sizeof(int),cmpr);
		wins = lose = 0;
		max = m * n;
		for(i=0;i<n;i++){
			lose += max - cards[i];
			if(!lose)
				++wins;
			else
				--lose;
			max = cards[i]-1;
		}
		printf("Case %d: %d\n",cnt,wins);
		scanf("%d%d",&m,&n);
	}
	return 0;
}

