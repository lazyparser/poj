#include <stdio.h>

int intersect(	int x01, int y01, int x02, int y02,
				int x11, int y11, int x12, int y12){
	double 	A1 = y01 - y02, B1 = x02 - x01, C1 = x01*y02 - x02*y01,
		 	A2 = y11 - y12, B2 = x12 - x11, C2 = x11*y12 - x12*y11;
			
	double 	i1 = x01*A2 + y01*B2 + C2,
			i2 = x02*A2 + y02*B2 + C2,
			j1 = x11*A1 + y11*B1 + C1,
			j2 = x12*A1 + y12*B1 + C1;

	if(i1 == 0 && (x01-x11)*(x01-x12) <= 0 && (y01-y11)*(y01-y12) <= 0)
		return 1;
	if(i2 == 0 && (x02-x11)*(x02-x12) <= 0 && (y02-y11)*(y02-y12) <= 0)
		return 1;
	if(j1 == 0 && (x11-x01)*(x11-x02) <= 0 && (y11-y01)*(y11-y02) <= 0)
		return 1;
	if(j2 == 0 && (x12-x01)*(x12-x02) <= 0 && (y12-y01)*(y12-y02) <= 0)
		return 1;

	if( ( (i1 > 0 && i2 < 0) || (i1 < 0 && i2 > 0) ) &&
			 ( (j1 > 0 && j2 < 0) || (j1 < 0 && j2 > 0) ) )
		return 1;
	else
		return 0;
}

int inside(int x01, int y01, int x02, int y02,
		int x11, int y11, int x12, int y12){
	int	xl = x11 > x12 ? x12 : x11,
		xr = x11 < x12 ? x12 : x11,
		yl = y11 > y12 ? y12 : y11,
		yr = y11 < y12 ? y12 : y11;
	return(
			( xl <= x01 && x01 <= xr ) &&
			( xl <= x02 && x02 <= xr ) &&
			( yl <= y01 && y01 <= yr ) &&
			( yl <= y01 && y01 <= yr )
		  );
}

int main(){
	int n,i,j,xy[8];
	scanf("%d",&n);
	while(n--){
		for(i=0;i<8;i++)
			scanf("%d",xy+i);
		if(		intersect(xy[0],xy[1],xy[2],xy[3],xy[4],xy[5],xy[6],xy[5]) ||
				intersect(xy[0],xy[1],xy[2],xy[3],xy[4],xy[7],xy[6],xy[7]) ||
				intersect(xy[0],xy[1],xy[2],xy[3],xy[4],xy[5],xy[4],xy[7]) ||
				intersect(xy[0],xy[1],xy[2],xy[3],xy[6],xy[5],xy[6],xy[7]) ||
				inside(xy[0],xy[1],xy[2],xy[3],xy[4],xy[5],xy[6],xy[7])
		  )
			printf("T\n");
		else
			printf("F\n");
	}
	return 0;
}

