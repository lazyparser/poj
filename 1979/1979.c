#include <stdio.h>

char map[32][32];
int xs[512],ys[512],sp;
int w,h;
int not_in(x,y){
	int i;
	for(i=sp-1;i>=0;--i){
		if(xs[i]==x && ys[i]==y)
			return 0;
	}
	return 1;
}
int solve(int x0, int y0){
	int i,j,k,sum;
	sum = 0;
	xs[0] = x0;
	ys[0] = y0;
	sp = 1;
	for(i=0;i<sp;i++){
		map[xs[i]][ys[i]] = '#';
		if( xs[i] > 0 && map[xs[i]-1][ys[i]]=='.' && not_in(xs[i]-1,ys[i])){
			xs[sp] = xs[i] - 1;
			ys[sp] = ys[i];
			++sp;
		}
		if( xs[i]+1 < h && map[xs[i]+1][ys[i]]=='.' && not_in(xs[i]+1,ys[i])){
			xs[sp] = xs[i] + 1;
			ys[sp] = ys[i];
			++sp;
		}
		if( ys[i] > 0 && map[xs[i]][ys[i]-1]=='.' && not_in(xs[i],ys[i]-1)){
			xs[sp] = xs[i];
			ys[sp] = ys[i] - 1;
			++sp;
		}
		if( ys[i]+1 < w && map[xs[i]][ys[i]+1]=='.' && not_in(xs[i],ys[i]+1)){
			xs[sp] = xs[i];
			ys[sp] = ys[i] + 1;
			++sp;
		}
	}
	return sp;
}

int main(){
	int i,j,x0,y0;
	scanf("%d%d",&w,&h);
	while(w&&h){
		for(i=0;i<h;i++){
			scanf("%s",map+i);
			for(j=0;j<w;j++){
				if(map[i][j]=='@'){
					x0=i;y0=j;
				}
			}
		}

		printf("%d\n",solve(x0,y0));
		scanf("%d%d",&w,&h);
	}
	return 0;
}
