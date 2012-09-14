#include <stdio.h>
const int U = 4, D = 2, E = 1;
const int N = 12;
int main() {
	int i,j,k,n;
	int on_balance[N],weight[N];
	char l[N],r[N],w[N];
	scanf("%d",&n);
	while(n--){
		for(i=0;i<N;i++)
			weight[i]=0;
		for(k=0;k<3;k++){
			for(i=0;i<N;i++)
				on_balance[i]=0;
			scanf("%s %s %s",l,r,w);
			if(strcmp(w,"even")==0){
				for(j=0;l[j];j++)
					weight[l[j]-'A']=E;
				for(j=0;r[j];j++)
					weight[r[j]-'A']=E;
			}else{
				for(j=0;l[j];j++)
					on_balance[l[j]-'A']=1;
				for(j=0;r[j];j++)
					on_balance[r[j]-'A']=1;
				for(j=0;j<N;j++)
					if(!on_balance[j])
						weight[j]=E;
				if(strcmp(w,"up")==0){
					for(j=0;l[j];j++)
						weight[l[j]-'A']|=D;
					for(j=0;r[j];j++)
						weight[r[j]-'A']|=U;
				}else if(strcmp(w,"down")==0){
					for(j=0;l[j];j++)
						weight[l[j]-'A']|=U;
					for(j=0;r[j];j++)
						weight[r[j]-'A']|=D;
				}
			}
		}
		for(i=0;i<N;i++){
			if(weight[i]==U)
				printf("%c is the counterfeit coin and it is light.\n",'A'+i);
			else if(weight[i]==D)
				printf("%c is the counterfeit coin and it is heavy.\n",'A'+i);
		}
	}/*while(n--)*/
	return 0;
}

