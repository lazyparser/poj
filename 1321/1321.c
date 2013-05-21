#include <stdio.h>
#include <string.h>
char board[8*8+1];
int col[8],row[8];
int cnt;

int solve(int n, int k, int pos){
	int i,r,c;
	if(k==0)
		return ++cnt;
	for(i=pos;i<n*n;i++){
		r=i/n;c=i%n;
		if(row[r] || col[c] || board[i]=='.')
			continue;
		row[r]=col[c]=1;
		solve(n,k-1,i+1);
		row[r]=col[c]=0;
	}
	return cnt;
}
				

int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	while(n>0){
		memset(col,0x0,sizeof(int)*8);
		memset(row,0x0,sizeof(int)*8);
		cnt=0;
		for(i=0;i<n;i++)
			scanf("%s",board+i*n);
		solve(n,k,0);
		printf("%d\n",cnt);
		scanf("%d%d",&n,&k);
	}
	return 0;
}

