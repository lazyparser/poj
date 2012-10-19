#include <stdio.h>
typedef long long ll;
ll combine(int n, int k){
	ll i,ret = 1;
	for(i=0;i<k;i++)
		ret *= (n-i);
	for(i=1;i<=k;i++)
		ret /= i;
	return ret;
}


ll possible(int m,int n,char* pre,char *post){
	int i,cnt,nchild=0;
	char *p,*q,*qbegin;
	ll ret = 1;
	if(n<=1){
		return 1;
	}else{
		p = pre + 1;
		qbegin = post;
		while( (p < pre+n) && *p){
			q = qbegin;
			cnt = 1;
			while((q < post + n -1) && *q != *p){
				q++;
				cnt++;
			}
			ret *= possible(m,cnt,p,qbegin);
			nchild++;
			p += cnt;
			qbegin += cnt;
		}
		ret *= combine(m,nchild);
	}
	return ret;
}

int main(){
	int m,n;
	char s1[27],s2[27];
	scanf("%d",&m);
	while(m){
		scanf("%s%s",s1,s2);
		for(n=0;s1[n];n++)
			/*EMPTY*/;
		printf("%lld\n",possible(m,n,(char*)s1,(char*)s2));
		scanf("%d",&m);
	}
	return 0;
}



