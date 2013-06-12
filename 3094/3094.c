#include <stdio.h>

int main(){
	char c;
	int pos = 0,qs = 0;/*quicksum*/
	while(1){
		scanf("%c",&c);
		switch(c){
			case '#':
				return 0;
			case '\n':
				printf("%d\n",qs);
				qs = 0;
				pos = 0;
				break;
			case ' ':
				++pos;
				break;
			default:
				++pos;
				qs += pos * (c-'A'+1);
		}
	}
	return 0;
}

