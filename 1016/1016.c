#include <stdio.h>
int main (){
	char input[128],v[16][128],*p,*q;
	int cnt[10],i,j;
	scanf("%s",input);
	while(input[0]!='-'){
		for(i=0;input[i];i++)
			v[0][i] = input[i];
		v[0][i] = '\0';
		for(i=0;i<15;i++){
			for(j=0;j<10;j++)
				cnt[j] = 0;
			for(j=0;v[i][j];j++)
				cnt[v[i][j]-'0']++;
			for(j=0,p=v[i+1];j<10;j++){
				if(cnt[j]>0){
					sprintf(p,"%d%d",cnt[j],j);
					while(*p)
						++p;
				}
			}
			for(j=i;j>=0;j--){
				if(0==strcmp(v[j],v[i+1])){
					if(i==0){
						printf("%s is self-inventorying\n",input);
						goto end_while;
					}else if(j==i){
						printf("%s is self-inventorying after %d steps\n",input,j);
						goto end_while;
					}else{
						printf("%s enters an inventory loop of length %d\n",input,i-j+1);
						goto end_while;
					}
				}
			}
		}
		printf("%s can not be classified after 15 iterations\n",input);
end_while:
		scanf("%s",input);
	}
}

