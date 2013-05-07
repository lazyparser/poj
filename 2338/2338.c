/* N范围小直接qsort就搞定了。题目本意应该使用qsort使用的分类算法，O(n)的复杂度。*/
#include <stdio.h>
#include <stdlib.h>
#define MAXN 10000
int milk[MAXN];
int cmp( const void * l, const void * r) {
	return *(int*)l - *(int*)r;
}
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",milk+i);
	qsort(milk,n,sizeof(int),cmp);
	printf("%d\n",milk[(n+1)/2-1]);
	return 0;
}
