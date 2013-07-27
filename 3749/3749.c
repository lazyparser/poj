#include <stdio.h>
#include <string.h>

int main() {
	char *p, ctl[128], data[256];
	scanf("%s\n", ctl);
	while(strcmp("ENDOFINPUT", ctl)) {
		gets(data);
		for (p=data;*p;p++) {
			if (isalpha(*p)) {
				*p -= 5;
				if (!isalpha(*p))
					*p += 26;
			}
		}
		printf("%s\n",data);
		scanf("%s\n", ctl); /* skip END */
		scanf("%s\n", ctl); /* START or ENDOFINPUT */
	}
	return 0;
}

