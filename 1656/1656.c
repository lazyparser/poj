#include <stdio.h>
int grid[128][128];
int main(){
	int n,x,y,L,i,j,sum;
	char instr[128];
	scanf("%d",&n);
	while(n--){
		scanf("%s%d%d%d",instr,&x,&y,&L);
		if(strcmp(instr,"TEST")){
			for(i=0;i<L;i++)
				for(j=0;j<L;j++)
					grid[i+x][j+y] = strcmp(instr,"BLACK")?0:1;
		}else{
			sum = 0;
			for(i=0;i<L;i++)
				for(j=0;j<L;j++)
					sum += grid[i+x][j+y];
			printf("%d\n",sum);
		}
	}
	return 0;
}


