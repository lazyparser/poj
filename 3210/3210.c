#include <stdio.h>
/*
 * see http://poj.org/showmessage?message_id=156192
 * */
int main(){
	int n;
	scanf("%d",&n);
	while(n){
		if(n%2)
			printf("%d\n",n-1);
		else
			printf("No Solution!\n");
		scanf("%d",&n);
	}
	return 0;
}

