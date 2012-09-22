#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void solve(int s,int n){
	char str[16],*p,show;
	int i,j;
	sprintf(str,"%d",n);
	for(p=str;*p;p++){
		if(*p=='1'||*p=='4'){
			show = ' ';
		}else{
			show = '-';
		}
		putchar(' ');
		for(i=0;i<s;i++){
			putchar(show);
		}
		putchar(' ');
		putchar(' ');
	}
	putchar('\n');
	for(i=0;i<s;i++){
		for(p=str;*p;p++){
			switch(*p){
			case '1':
			case '2':
			case '3':
			case '7':
				putchar(' ');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar('|');
				break;
			case '4':
			case '8':
			case '9':
			case '0':
				putchar('|');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar('|');
				break;
			case '5':
			case '6':
				putchar('|');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar(' ');
				break;
			}
			putchar(' ');
		}
		putchar('\n');
	}
	for(p=str;*p;p++){
		if(*p=='1'||*p=='7'||*p=='0'){
			show = ' ';
		}else{
			show = '-';
		}
		putchar(' ');
		for(i=0;i<s;i++){
			putchar(show);
		}
		putchar(' ');
		putchar(' ');
	}
	putchar('\n');
	for(i=0;i<s;i++){
		for(p=str;*p;p++){
			switch(*p){
			case '1':
			case '3':
			case '4':
			case '5':
			case '7':
			case '9':
				putchar(' ');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar('|');
				break;
			case '8':
			case '0':
			case '6':
				putchar('|');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar('|');
				break;
			case '2':
				putchar('|');
				for(j=0;j<s;j++){
					putchar(' ');
				}
				putchar(' ');
				break;
			}
			putchar(' ');
		}
		putchar('\n');
	}
	for(p=str;*p;p++){
		if(*p=='1'||*p=='4'||*p=='7'){
			show = ' ';
		}else{
			show = '-';
		}
		putchar(' ');
		for(i=0;i<s;i++){
			putchar(show);
		}
		putchar(' ');
		putchar(' ');
	}
	putchar('\n');
}
int main(){
	int s,n;
	scanf("%d%d",&s,&n);
	while(s){
		solve(s,n);
		putchar('\n');
		scanf("%d%d",&s,&n);
	}
	return 0;
}
