#include <stdio.h>

int main(){
		char city1[512],city2[512],code[2];
		int miles,total;
		scanf("%s",city1);
		while(!(city1[0] == '#' && city1[1] == '\0')){
			total = 0;
			while(!(city1[0] == '0' && city1[1] == '\0')){
				scanf("%s%d%s",city2,&miles,code);
				switch(code[0]){
						case 'F':
							total += miles + miles;
							break;
						case 'B':
							total += miles + (miles + 1)/2;
							break;
						case 'Y':
							total += miles > 500 ? miles : 500;
							break;
				}
				scanf("%s",city1);
			}
			printf("%d\n",total);
			scanf("%s",city1);
		}
		return 0;
}


