#include <stdio.h>
#include <string.h>
char bw[128][128],fw[128][128];
int nbw,nfw;
int main(){
	char command[16],curr_url[128]="http://www.acm.org/";
	while(1){
		scanf("%s",command);
		if(!strcmp(command,"QUIT")){
			break;
		}else if(!strcmp(command,"BACK")){
			if(nbw>0){
				strncpy(fw[nfw++],curr_url,128*sizeof(char));
				strncpy(curr_url,bw[--nbw],128*sizeof(char));
				printf("%s\n",curr_url);
			}else{
				printf("Ignored\n");
			}

		}else if(!strcmp(command,"FORWARD")){
			if(nfw>0){
				strncpy(bw[nbw++],curr_url,128*sizeof(char));
				strncpy(curr_url,fw[--nfw],128*sizeof(char));
				printf("%s\n",curr_url);
			}else{
				printf("Ignored\n");
			}

		}else if(!strcmp(command,"VISIT")){
			nfw=0;
			strncpy(bw[nbw++],curr_url,128*sizeof(char));
			scanf("%s",curr_url);
			printf("%s\n",curr_url);
		}
	}
	return 0;
}
