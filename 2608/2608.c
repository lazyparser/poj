#include <stdio.h>

int code[26];
int main(){
	char line[32],*p;
	int pre,cur;
	code['B'-'A'] = code['F'-'A'] = code['P'-'A'] = code['V'-'A'] = 1;
	code['C'-'A'] = code['G'-'A'] = code['J'-'A'] = code['K'-'A'] = 2;
	code['Q'-'A'] = code['S'-'A'] = code['X'-'A'] = code['Z'-'A'] = 2;
	code['D'-'A'] = code['T'-'A'] = 3;
	code['L'-'A'] = 4;
	code['M'-'A'] = code['N'-'A'] = 5;
	code['R'-'A'] = 6;
	while(EOF!=scanf("%s",line)){
		pre = 0;
		for(p=line;*p;++p){
			cur = code[*p - 'A'];
			if(cur && pre != cur)
				printf("%d",cur);
			pre = cur;
		}
		printf("\n");
	}
	return 0;
}

