#include <stdio.h>
int m[5][5],f[5][5],x[128],y[128],p[128],rlt[128],sp,sr;
int main(){
	int i,j,nx,ny;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&m[i][j]);
	x[0] = y[0] = 0;
	p[0] = -1;
	sp = 1;
	for(i=0;i<sp;i++){
		if(x[i]==4&&y[i]==4){
			for(sr=0,j=i;j>=0;j=p[j])
				rlt[sr++] = j;
			for(j=sr-1;j>=0;j--)
				printf("(%d, %d)\n",x[rlt[j]],y[rlt[j]]);
			break;
		}else{
			nx = x[i]-1; ny = y[i];
			if(nx>=0 && nx<5 && ny>=0 && ny<5 && !m[nx][ny] && !f[nx][ny]){
				x[sp] = nx; y[sp] = ny; p[sp] = i; f[nx][ny] = 1; ++sp;
			}
			nx = x[i]+1; ny = y[i];
			if(nx>=0 && nx<5 && ny>=0 && ny<5 && !m[nx][ny] && !f[nx][ny]){
				x[sp] = nx; y[sp] = ny; p[sp] = i; f[nx][ny] = 1; ++sp;
			}
			nx = x[i]; ny = y[i]-1;
			if(nx>=0 && nx<5 && ny>=0 && ny<5 && !m[nx][ny] && !f[nx][ny]){
				x[sp] = nx; y[sp] = ny; p[sp] = i; f[nx][ny] = 1; ++sp;
			}
			nx = x[i]; ny = y[i]+1;
			if(nx>=0 && nx<5 && ny>=0 && ny<5 && !m[nx][ny] && !f[nx][ny]){
				x[sp] = nx; y[sp] = ny; p[sp] = i; f[nx][ny] = 1; ++sp;
			}
		}
	}
	return 0;
}

