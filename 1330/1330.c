/*
 * 保存两个节点到根的路径，不是空间最省的方法，
 * 但是更加简单
 * */
#include <stdio.h>
#include <string.h>

int p[10001],p1[10001],p2[10001],cnt1,cnt2;
int main(){
	int t,n,nod1,nod2,i,parent,children,iter;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		memset(p+1,0x00,sizeof(int)*(n));
		while(--n){
			scanf("%d%d",&parent,&children);
			p[children]=parent;
		}
		scanf("%d%d",&nod1,&nod2);
		cnt1=cnt2=-1;
		iter=nod1;
		while(iter){
			p1[++cnt1]=iter;
			iter=p[iter];
		}
		iter=nod2;
		while(iter){
			p2[++cnt2]=iter;
			iter=p[iter];
		}
		while(p1[cnt1]==p2[cnt2]){
			if(cnt1 == 0){
				printf("%d\n",p1[cnt1]);
				break;
			}else if(cnt2 == 0){
				printf("%d\n",p2[cnt2]);
				break;
			}else{
				--cnt1;--cnt2;
			}
		}
		if(cnt1&&cnt2)
			printf("%d\n",p1[cnt1+1]);
	}
}
