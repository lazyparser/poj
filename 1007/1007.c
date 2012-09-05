#include<stdio.h>
char dna[101][51];
int ndna[101];/*count*/
int fdna[101];/*flag*/
int main(){
	int m,n,i,j,A,C,G,T,min_n,min_i;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%s",dna+i);
	}
	for(i=0;i<m;i++){
		ndna[i]=A=G=C=T=0;
		for(j=0;j<n;j++){
			switch(dna[i][j]){
				case 'T': 
					++T;break;
				case 'G': 
					++G;ndna[i]+=T;break;
				case 'C':
					++C;ndna[i]+=T+G;break;
				case 'A':
					ndna[i]+=C+T+G;break;
			}
		}
	}
	for(i=0;i<m;i++){
		for(min_n=0x7FFFFFFF,j=0;j<m;j++){
			if(fdna[j])continue;
			if(ndna[j]<min_n){
				min_i=j;
				min_n=ndna[j];
			}
		}
		fdna[min_i]=1;
		printf("%s\n",dna[min_i]);
	}
}

