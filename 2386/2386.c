#include <stdio.h>
int n,m;
int farm[128][128];
char input[128][128];
void dfs(int r, int c){
	if (r < 0 || r >= n || c < 0 || c >= m)
		return;
	if (input[r][c] == 'W' && farm[r][c] == 0) {
		farm[r][c] = 1;
		dfs(r-1,c-1);
		dfs(r-1,c);
		dfs(r-1,c+1);
		dfs(r,c-1);
		dfs(r,c+1);
		dfs(r+1,c-1);
		dfs(r+1,c);
		dfs(r+1,c+1);
	}
}

int main(){
	int i,j,ponds;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",input+i);
	ponds = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(input[i][j] == 'W' && farm[i][j]==0){
				++ponds;
				dfs(i,j);
			}
		}
	}
	printf("%d\n",ponds);
	return 0;
}

