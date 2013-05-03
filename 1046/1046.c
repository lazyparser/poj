#include <stdio.h>
#include <math.h>
#define R 0
#define G 1
#define B 2
#define NPALETTE 16
#define POW(x) ((double)(x)*(x))

double distance(int r, int g, int b, int r0, int g0, int b0){
	return POW(r-r0)+POW(g-g0)+POW(b-b0);
}
int main (){
	int i,r,g,b,min;
	double d[NPALETTE];
	int palette[NPALETTE][3];
	for(i=0;i<NPALETTE;i++)
		scanf("%d%d%d",&palette[i][R],&palette[i][G],&palette[i][B]);
	scanf("%d%d%d",&r,&g,&b);
	while(r>=0){
		for(i=0;i<NPALETTE;i++)
			d[i] = distance(palette[i][R],palette[i][G],palette[i][B],r,g,b);
		for(min=0,i=0;i<NPALETTE;i++)
			if(d[min]>d[i])
				min = i;
		printf("(%d,%d,%d) maps to (%d,%d,%d)\n",
				r,g,b,palette[min][R],palette[min][G],palette[min][B]);
		scanf("%d%d%d",&r,&g,&b);
	}
	return 0;
}

