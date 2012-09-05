#include<stdio.h>
char* haab[20]={  "pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
char* tzolkin[20]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
int main(){
	int n,d,y,utc,i,d2,y2;
	char m[20];
	scanf("%d",&n);
	printf("%d\n",n);
	while(n--){
		scanf("%d. %s %d",&d,m,&y);
		for(i=0;i<20;i++)
			if(0==strcmp(m,haab[i]))break;
		utc=y*365+d+i*20;
		y2=utc/260;
		d2=utc%260;
		printf("%d %s %d\n",d2%13+1,tzolkin[d2%20],y2);
	}
}


