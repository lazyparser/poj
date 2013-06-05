#include <stdio.h>
int main(){
	int i,z1,m1,z2,m2,z,m,sgn;
	char op;
	while(EOF!=scanf("%d/%d%c%d/%d",&z1,&m1,&op,&z2,&m2)){
		sgn = 0;
		z = (op=='+')?z1*m2+z2*m1:z1*m2-z2*m1;
		if(z<0) sgn = 1, z = -z;
		m = m1*m2;
		for(i=2;i<=m && i<=z;i++)
			while(z%i==0&&m%i==0)
				z/=i,m/=i;
		if(z==0)
			printf("0\n");
		else if(m==1)
			printf("%s%d\n",sgn?"-":"",z);
		else
			printf("%s%d/%d\n",sgn?"-":"",z,m);
	}
	return 0;
}

