#include <stdio.h>
int main(){
	int n,i,j,a,b;
	char x[8],y[8];
	scanf("%d",&n);
	while(n--){
		scanf("%s%s",x,y);
		a = b = 0;
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(x[i]==y[j]){
					if(i == j)
						++a;
					++b;
				}
		printf("%dA%dB\n",a,b-a);
	}
	return 0;
}

