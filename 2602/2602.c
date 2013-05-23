/*
 * 说明：
 * 题目保证了和的位数不会超过N
 * 前置的0需要输出，例如 001 + 002 需要输出 003。
 * 如果最后不使用 printf("%s\n") 而使用循环进行输出，会导致超时。
 * */
#include <stdio.h>

char a[1000008],b[1000008];
int main(){
	int n,i,inc,sum;
	scanf("%d\n",&n);
	/*printf("%d\n",n);*/
	for(i=1;i<=n;i++)
		scanf("%c %c\n",a+i,b+i);
	/*
	for(i=1;i<=n;i++)
		printf("%c",*(a+i));
	printf("\n");
	for(i=1;i<=n;i++)
		printf("%c",*(b+i));
	printf("\n");
	*/
	inc = 0;
	for(i=n;i;--i){
		sum = a[i]-'0'+b[i]-'0' + inc;
		inc = sum/10;
		sum = sum%10;
		a[i] = sum + '0';
	}

	/*if(inc) printf("%d",inc);*/

	/*for(i=1;i<=n;++i)
		printf("%c",a[i]);
	printf("\n");*/

	a[n+1] = 0;
	printf("%s\n",a+1);

	return 0;
}

