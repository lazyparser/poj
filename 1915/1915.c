# Stack-based BFS
#include <stdio.h>
int board[300][300];
int stackx[300*300];
int stacky[300*300];
int steps[300*300];
int top;
void safepush(int l, int cur, int x, int y){
	if(x < 0 || y < 0 || x >= l || y>= l || board[x][y])
		return;
	top++;
	stackx[top]=x;
	stacky[top]=y;
	board[x][y]=1;
	steps[top]=steps[cur]+1;
}
void solve(int l, int x1, int y1, int x2, int y2){
	int i,j,k,cur=0;
	for (i=0; i<l; i++)
		for (j=0; j<l; j++)
			board[i][j] = 0;
	board[x1][y1] = 1;
	top=0;
	stackx[top] = x1;
	stacky[top] = y1;
	steps[top]=0;
	while(cur<=top && top<300*300){
		if( stackx[cur] == x2 && stacky[cur] == y2){
			printf("%d\n",steps[cur]);
			break;
		}else{
			safepush(l,cur, stackx[cur]-2, stacky[cur]-1);
			safepush(l,cur, stackx[cur]-2, stacky[cur]+1);
			safepush(l,cur, stackx[cur]-1, stacky[cur]-2);
			safepush(l,cur, stackx[cur]-1, stacky[cur]+2);
			safepush(l,cur, stackx[cur]+1, stacky[cur]-2);
			safepush(l,cur, stackx[cur]+1, stacky[cur]+2);
			safepush(l,cur, stackx[cur]+2, stacky[cur]-1);
			safepush(l,cur, stackx[cur]+2, stacky[cur]+1);
			cur++;
		}
	}
}

int main(){
	int n,l,x1,y1,x2,y2;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d",&l,&x1,&y1,&x2,&y2);
		solve(l,x1,y1,x2,y2);
	}
}
