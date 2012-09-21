#include <stdio.h>
/**
 * Emulation solution
 * */
void solve_emulation(){
	int t,n,i,j,p,prev,nleft,nright;
	char seq[64];
	scanf("%d",&t);
	while(0<t){
		--t;
		scanf("%d",&n);
		prev=0;
		for(i=0;i<n;i++){
			scanf("%d",&p);
			for(j=prev+i;j<p+i;j++){
				seq[j]='(';
			}
			seq[p+i]=')';
			prev=p;
		}	
		for(i=1;i<n+n;i++){
			if(seq[i]==')'){
				nleft = 0;
				nright = 1;
				for(j=i-1;nleft < nright;--j){
					if(seq[j]=='(')
						++nleft;
					else
						++nright;
				}
				printf("%d ",(i-j)/2);
			}
		}
		printf("\n");
	}
}
/**
 * "fast" solution
 * see http://poj.org/showmessage?message_id=174414
 * slower than emulation solution. ( 16 MS vs. 0 MS )
 * */
void solve_fast(){
	int t,n,i,j,p[32];
	scanf("%d",&t);
	while(0<t){
		--t;
		scanf("%d",&n);
		p[0]=0;
		for(i=1;i<=n;i++){
			scanf("%d",p+i);
		}
		for(i=1;i<=n;i++){
			for(j=i-1;p[i]-p[j]<i-j;--j)
				/*EMPTY*/;
			printf("%d ",i-j);
		}
		printf("\n");
	}
}

int main(){
	//solve_emulation();
	solve_fast();
	return 0;
}
