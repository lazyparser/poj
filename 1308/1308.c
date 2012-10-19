#include <stdio.h>
typedef int arr[1000000];
arr from,to,nodes;
int solve(int cnt,arr from,arr to,int n){
	int i,j,k,root,n_nodes;
	/* Empty Tree is also a tree. */
	if(n==0)
		return 1;

	/* find root */
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(from[i]==to[j]){
				break;
			}
		}
		if(j==n){
			root = from[i];
			break;
		}
	}
	if(root==0)
		return 0;
	/* traverse */
	n_nodes = 0;
	nodes[n_nodes++]=root;
	for(i=0;i<n_nodes;i++){
		for(j=0;j<n;j++){
			if(from[j]==nodes[i]){
				for(k=0;k<n_nodes;k++){
					if(to[j]==nodes[k])
						return 0;
				}
				nodes[n_nodes++]=to[j];
			}
		}
	}
	if(n_nodes != n + 1)
		return 0;
	return 1;
}
int main(){
	int i,j,cnt=0;
	scanf("%d%d",&from[0],&to[0]);
	while(from[0]>=0){
		cnt++;
		i=0;
		while(from[i]){
			++i;
			scanf("%d%d",from+i,to+i);
		}
		if(solve(cnt,from,to,i))
			printf("Case %d is a tree.\n",cnt);
		else
			printf("Case %d is not a tree.\n",cnt);
		scanf("%d%d",&from[0],&to[0]);
	}
	return 0;
}

