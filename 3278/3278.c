#include <stdio.h>
int flag[200008],path[200008],sp;

int main(){
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	if(k<=n){
		printf("%d\n", n - k);
	}else{
		sp = 1;
		path[0] = n;
		flag[n] = 1;

		for(i=0;i<sp;i++){
			if(k == path[i]){
				printf("%d\n", flag[path[i]]-1);
				break;
			}else if(k == path[i]-1 || k == path[i] + 1 || k == path[i] * 2){
				printf("%d\n", flag[path[i]]);
				break;
			}
				
			if(path[i]-1>=0 && flag[path[i]-1]==0){
				path[sp++] = path[i]-1;
				flag[path[i]-1] = flag[path[i]] + 1;
			}
			if(path[i]+1<=100000 && flag[path[i]+1]==0){
				path[sp++] = path[i]+1;
				flag[path[i]+1] = flag[path[i]] + 1;
			}
			if(path[i] <= 100000 && flag[path[i]*2]==0){
				path[sp++] = path[i]*2;
				flag[path[i]*2] = flag[path[i]] + 1;
			}
		}
	}
	return 0;
}

