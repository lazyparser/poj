#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int v,num;
	struct node *l,*r;
}node,*pnode;

pnode root;
int dup_found;

pnode node_new(const int v){
	pnode p=(pnode)malloc(sizeof(node));
	p->v = v;
	p->num = 1;
	p->l = p-> r = NULL;
	return p;
}

void tree_insert(pnode *a_node,const int v){
	if(!*a_node){
		*a_node=node_new(v);
	}else{
		pnode p = *a_node;
		if(p->v == v)
			p->num ++;
		else if(p->v > v)
			tree_insert(& ( p-> l ),v);
		else
			tree_insert(& ( p-> r ),v);
	}
}
typedef void (*fn)(pnode);
void tree_visit(pnode a_node,fn a_fn){
	if(!a_node) return;
	tree_visit(a_node->l,a_fn);
	a_fn(a_node);
	tree_visit(a_node->r,a_fn);
}

void output_dup(pnode a_node){
	if(a_node && a_node->num >= 2){
		printf("%03d-%04d %d\n",a_node->v/10000,a_node->v%10000,a_node->num);
		dup_found = 1;
	}

}

int main(){
	int N,i;
	char str[100];
	char phone[8];phone[7]='\0';
	scanf("%d",&N);
	for(i=0;i<N;++i){
		scanf("%s",str);
		char *p=str;
		int j = 0;
		while(*p){
			if(*p=='-') ;/*skip*/
			else if(*p >= '0' && *p <= '9') phone[j++]=*p;
			/*else if(*p < 'A') printf("ERROR:%c\n",*p);*/
			else if(*p <= 'C') phone[j++]='2';
			else if(*p <= 'F') phone[j++]='3';
			else if(*p <= 'I') phone[j++]='4';
			else if(*p <= 'L') phone[j++]='5';
			else if(*p <= 'O') phone[j++]='6';
			else if(*p <= 'S') phone[j++]='7';
			else if(*p <= 'V') phone[j++]='8';
			else if(*p <= 'Y') phone[j++]='9';
			/*else printf("ERROR:%c\n",*p);Error!*/
			p++;
		}
		/*printf("%d\n%s\n",atoi(phone),phone);*/
		tree_insert(&root,atoi(phone));
	}
	tree_visit(root,output_dup);
	if(!dup_found)
		printf("No duplicates.\n");
}
