#include <stdio.h>
int not_full(int dic[52],int stack[16],int n,int k){
	int i,cnt=0;
	for(i=0;i<n;i++)
		if(stack[i]==k)
			++cnt;
	return dic[k] != cnt;
}

void perm(int dic[52],int stack[16],int top,int len){
	int i;
	if(top == len){
		for(i=0;i<top;i++)
			putchar((stack[i]%2?'a':'A')+stack[i]/2);
		putchar('\n');
	}else{
		for(i=0;i<52;i++){
			if(dic[i] && not_full(dic,stack,top,i)){
				stack[top]=i;
				perm(dic,stack,top+1,len);
			}
		}
	}
}
int main(){
	int n, i, len;
	int appear[52],stack[16];
	char input[16];
	scanf("%d",&n);
	while(n--){
		scanf("%s",input);
		for(i=0;i<52;i++){
			appear[i] = 0;
		}
		for(i=0;i<16 && input[i];i++){
			if(input[i] <= 'Z'){
				appear[2*(input[i]-'A')] ++;
			}else{
				appear[2*(input[i]-'a')+1] ++;
			}
		}
		for(len = 0,i = 0;i<52;i++){
			len += appear[i];
		}
		perm(appear,stack,0,len);
	}
	return 0;
}

