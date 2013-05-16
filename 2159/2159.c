#include <stdio.h>
#include <string.h>

void count(char str[128], int cnt[26]){
	memset(cnt,0,sizeof(int)*26);
	char *p = str;
	while(*p)
		++cnt[*(p++)-'A'];
	return;
}
int cmpr(const void * l, const void* r){
	return *(int*)l - *(int*)r;
}
void sort(int cnt[26]){
	qsort(cnt,26,sizeof(int),cmpr);
}

int main(){
	char e[128],p[128];
	int i,ec[26],pc[26];
	scanf("%s%s",e,p);
	count(e,ec);
	sort(ec);
	count(p,pc);
	sort(pc);
	for(i=0;i<26;i++)
		if(ec[i]!=pc[i])
			break;
	printf("%s\n",i==26?"YES":"NO");
	return 0;
}

