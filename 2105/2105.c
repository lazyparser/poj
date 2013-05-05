#include <stdio.h>
int main(){
		int n,i,j,ip[4],pow;
		char c;
		scanf("%d",&n);
		while(n--){
				for(i=0;i<4;i++){
						ip[i]=0;
						for(j=0,pow=128;j<8;j++,pow=pow>>1){
								c = getchar();
								while(c!='0'&&c!='1')
										c = getchar();
								if(c=='1')
										ip[i]+=pow;
						}
				}
				printf("%d.%d.%d.%d\n",ip[0],ip[1],ip[2],ip[3]);
		}
		return 0;
}

