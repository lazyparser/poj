#include <stdio.h>
#define POS(x,y) (3*((x)/3)+(y)/3)

int row[9][10],col[9][10],blk[9][10],sudoku[9][9];

void check(){
	int i,j;
	for(i=0;i<9;i++)
		for(j=1;j<=9;j++)
			if(!(row[i][j]&&col[i][j]&&blk[i][j]))
				return;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++)
			printf("%d",sudoku[i][j]);
		printf("\n");
	}
}

void solve(int pos){
	int x = pos/9, y = pos%9 ,k;
	if(pos<0){
		check();
	}else if(sudoku[x][y]==0){
		for(k=1;k<=9;++k){
			if(	row[x][k] || col[y][k] || blk[POS(x,y)][k] )
				continue;
			sudoku[x][y] = k;
			row[x][k] = col[y][k] = blk[POS(x,y)][k] = 1;
			solve(pos-1);
			row[x][k] = col[y][k] = blk[POS(x,y)][k] = 0;
			sudoku[x][y] = 0;
		}
	}else{
		solve(pos-1);
	}

}

int main(){
	int n,i,j;
	char line[16];
	scanf("%d",&n);
	while(n--){
		for(i=0;i<9;i++){
			scanf("%s",line);
			for(j=0;j<9;j++){
				sudoku[i][j] = line[j] - '0';
				row[i][sudoku[i][j]] = 1;
				col[j][sudoku[i][j]] = 1;
				blk[POS(i,j)][sudoku[i][j]] = 1;
			}
		}
		solve(80);
	}
	return 0;
}

