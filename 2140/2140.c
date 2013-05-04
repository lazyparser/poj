#include <stdio.h>
int main(){
		int n,l=1,r=1,sum=1,total=0;
		scanf("%d",&n);
		while ( l<=n && r<=n ){
				if(sum>n){
						sum-=l;
						++l; /* sure l <= r */
				}else{
					if(sum==n)
						++total;
					++r;
					sum+=r;
				}
		}
		printf("%d\n",total);
		return 0;
}

