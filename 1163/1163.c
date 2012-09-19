#include <stdio.h>
int main(){
	int i,j,r,max=0,d[128][128],s[128][128];
	scanf("%d",&r);
	for(i=0;i<r;i++){
		for(j=0;j<=i;j++){
			scanf("%d",&d[i][j]);
		}
	}
	s[0][0]=d[0][0];
	for(i=1;i<r;i++){
		s[i][i]+=d[i][i]+s[i-1][i-1];
		s[i][0]+=d[i][0]+s[i-1][0];
		for(j=1;j<i;j++){
			s[i][j]=d[i][j];
			if(s[i-1][j-1] > s[i-1][j])
				s[i][j]+=s[i-1][j-1];
			else
				s[i][j]+=s[i-1][j];
		}
	}
	for(j=0;j<r;j++){
		if(s[r-1][j]>max)max=s[r-1][j];
	}
	printf("%d\n",max);
	return 0;
}

