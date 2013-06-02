#include <stdio.h>
int main(){
	char c1,c2,c3;
	while(EOF!=scanf("%c",&c1)){
		if(c1=='y' && EOF!=scanf("%c",&c2))
			if(c2=='o' && EOF!=scanf("%c",&c3))
				if(c3=='u') printf("we");
				else printf("%c%c%c",c1,c2,c3);
			else printf("%c%c",c1,c2);
		else printf("%c",c1);
	}
	return 0;
}

