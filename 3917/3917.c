#include <stdio.h>

int main(){
	char *p,*q,pn,qn,p1[128],p2[128];
	while(1){
		scanf("%s%s",p1,p2);
		pn = qn = 0;
		if(p1[0] == 'E') break;
		for(p=p1,q=p2;*p&&*q;p++,q++)
			if( (*p=='R' && *q=='S') ||
				(*p=='S' && *q=='P') ||	
				(*p=='P' && *q=='R') )
				++pn;
			else if( (*q=='R' && *p=='S') ||
				(*q=='S' && *p=='P') ||	
				(*q=='P' && *p=='R') )
				++qn;
		printf("P1: %d\nP2: %d\n",pn,qn);
	}
	return 0;
}

