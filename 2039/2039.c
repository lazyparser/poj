#include <stdio.h>
char pads[200][20];
void solve(int col, char s[256]){
		int pos, len, row;
		for(pos=0;s[pos];pos++){
				if( (pos/col) % 2 )
						pads[pos/col][col - 1 - pos%col] = s[pos];
				else
						pads[pos/col][pos%col] = s[pos];
		}
		len = pos;
		row = len / col;
		for(pos=0;pos<len;pos++)
				printf("%c",pads[pos%row][pos/row]);
		printf("\n");
}
		


int main(){
		int col;
		char input[256];
		scanf("%d",&col);
		while(col){
				scanf("%s",input);
				solve(col, input);
				scanf("%d",&col);
		}
		return 0;
}

