#include <stdio.h>
#define LEN 100001
char s[LEN],t[LEN];
int main(){
    int sp,tp,slen,tlen;
	while (EOF!=scanf("%s %s",s,t)){
	    sp = tp = 0;
		for(tp = 0;t[tp];tp++){
		    if(!s[sp])
			    break;
		    if(s[sp] == t[tp])
			    sp++;
		}
		if(s[sp])
		    printf("No\n");
	    else
		    printf("Yes\n");
	}
	return 0;
}


