#include <stdio.h>
int R,C,h[100][100],max[100][100];
void calc_max(int r,int c){
	if(max[r][c]>0) return; /*calcuated*/
	max[r][c]=1;
	/*north*/
	if(r>0 && h[r-1][c] < h[r][c]){
		calc_max(r-1,c);
		if(max[r-1][c]>=max[r][c])
			max[r][c] = 1+max[r-1][c];
	}

	/*east*/
	if(c+1<C && h[r][c+1] < h[r][c]){
		calc_max(r,c+1);
		if(max[r][c+1]>=max[r][c])
			max[r][c] = 1+max[r][c+1];
	}

	/*south*/
	if(r+1<R && h[r+1][c] < h[r][c]){
		calc_max(r+1,c);
		if(max[r+1][c]>=max[r][c])
			max[r][c] = 1+max[r+1][c];
	}

	/*west*/
	if(c>0 && h[r][c-1] < h[r][c]){
		calc_max(r,c-1);
		if(max[r][c-1]>=max[r][c])
			max[r][c] = 1+max[r][c-1];
	}
}

int main(){
	int i,j,result;
	scanf("%d%d",&R,&C);
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			scanf("%d",&(h[i][j]));
			max[i][j]=0;
		}
	}
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			calc_max(i,j);
		}
	}
	result=0;
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			/*printf("%3d",max[i][j]);*/
			if(max[i][j]>result)
				result = max[i][j];
		}
		/*printf("\n");*/
	}
	printf("%d\n",result);
	return 0;
}
	
