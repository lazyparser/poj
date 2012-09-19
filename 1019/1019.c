#include <stdio.h>
/**
 * Sk的长度具有以下规律：
 * k = 0   ~   9   => length(k) = k * 1
 * k = 10  ~  99   => length(k) = k * 2 - 9
 * k = 100 ~ 999   => length(k) = k * 3 - 9 - 99
 * k = 1000~9999   => length(k) = k * 4 - 9 - 99 - 999
 * 知道了Sk的规律，就知道了SUM(Sk)的规律，分段求和。
 * 求解方法：
 * 1. 求Sk中k的范围（位数）；
 * 2. 具体的k值；
 * 3. 求解i在Sk中的具体位置。
 *
 * XXX:int/long会溢出，导致TLE。
 * 
 * */
typedef long long ll;
ll expand(ll n){
	ll i,ret = 1;
	for(i=0;i<n;i++)
		ret*=10;
	return ret;
}
ll vec_sum(ll b,ll e,ll coe,ll step){
	return (e-b+1)*(e+b)*coe/2 + step*(e-b+1);
}
ll suffix(ll digits){
	ll suff = 0,i;
	for(i=1;i<digits;i++){
		suff += 1-expand(i);
	}
	return suff;
}
ll sk_sum(ll k){
	ll d=0, kk, sum, i;
	if(k<1) return 0;
	for(kk=k;kk;kk/=10)
		d++;
	sum=0;
	for(i=1;i<d;++i){
		sum+=vec_sum(expand(i-1),expand(i)-1,i,suffix(i));
	}
	sum+=vec_sum(expand(d-1),k,d,suffix(d));
	return sum;
}
ll digit_in_sk(ll pos){
	ll d,s=1,p=pos;
	while(p>9*s*expand(s-1)){
		p-=9*s*expand(s-1);
		s++;
	}
	if(s==1){
		return pos;
	}else{
		d=(p-1)%s;
		p=((p-1-d)/(s*expand(s-d-1)))%10;
		if(d==0)p=(p+1)%10;
		return p;
	}
}

ll solve(ll pos){
	ll d,kl,kmid,kr,p;
	for(d=1;pos>sk_sum(expand(d));d++)
		/*EMPTY*/;
	
	for(kl=expand(d-1)-1,kr=expand(d);kr-kl>1;){
		kmid = kl + (kr - kl)/2;
		if(pos>sk_sum(kmid))
			kl = kmid;
		else
			kr = kmid;
	}
	p = pos - sk_sum(kr-1);
	return digit_in_sk(p);
}
int main(){
	ll n,pos;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&pos);
		printf("%lld\n",solve(pos));
	}
	return 0;
}

