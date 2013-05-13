#include <stdio.h>
#define total (1<<16)

int flags[total];
int queue[total];
int sp=1;

int main(){
	int i,j,next[16];
	char c;
	for(i=0;i<16;i++){
		scanf("%c",&c);
		while(c!='b'&&c!='w')
			scanf("%c",&c);
		queue[0] |= (c=='w'?(1<<i):0);
	}
	if(queue[0] == 0 || queue[0] == 0xFFFF){
		printf("%d\n",0);
		return 0;
	}
	flags[queue[0]]=1;
	for(i=0;i<sp;i++){
		next[0] = queue[i] ^ 0x0013;
		next[1] = queue[i] ^ 0x0027;
		next[2] = queue[i] ^ 0x004E;
		next[3] = queue[i] ^ 0x008C;

		next[4] = queue[i] ^ 0x0131;
		next[5] = queue[i] ^ 0x0272;
		next[6] = queue[i] ^ 0x04E4;
		next[7] = queue[i] ^ 0x08C8;

		next[8] = queue[i] ^ 0x1310;
		next[9] = queue[i] ^ 0x2720;
		next[10] = queue[i] ^ 0x4E40;
		next[11] = queue[i] ^ 0x8C80;

		next[12] = queue[i] ^ 0x3100;
		next[13] = queue[i] ^ 0x7200;
		next[14] = queue[i] ^ 0xE400;
		next[15] = queue[i] ^ 0xC800;
		for(j=0;j<16;j++){
			if(next[j] == 0 || next[j] == 0xFFFF){
				printf("%d\n",flags[queue[i]]);
				return 0;
			}
			if(flags[next[j]]==0){
				flags[next[j]] = flags[queue[i]] + 1;
				queue[sp++] = next[j];
			}
		}
	}
	printf("Impossible\n");
	return 0;
}

