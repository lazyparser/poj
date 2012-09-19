#include <stdio.h>
int main(){
	int i,j,ii,jj,max=0,tmp,n,v[128][128],s[128][128];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&v[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0){
				if(j==0)
					s[i][j]=v[i][j];
				else
					s[i][j]=s[i][j-1]+v[i][j];
			}else{
				if(j==0)
					s[i][j]=s[i-1][j]+v[i][j];
				else
					s[i][j]=s[i-1][j]-s[i-1][j-1]+s[i][j-1]+v[i][j];
			}
			//if(max<s[i][j])max=s[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(ii=i;ii<n;ii++){
				for(jj=j;jj<n;jj++){
					if(i==0){
						if(j==0){
							tmp = s[ii][jj];
						}else{
							tmp = s[ii][jj]-s[ii][j-1];
						}
					}else{
						if(j==0){
							tmp = s[ii][jj]-s[i-1][jj];
						}else{
							tmp = s[ii][jj]-s[ii][j-1]+s[i-1][j-1]-s[i-1][jj];
						}
					}
					if(max<tmp)max=tmp;
				}
			}
		}
	}
	printf("%d\n",max);
	return 0;
}



