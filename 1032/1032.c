/* Credit: Ozy */
#include<stdio.h>
int main(){
    int n,i,k,sum=0,diff,v[99];
    scanf("%d",&n);
    for(k=2;1;k++){
        v[k]=k;
        sum+=k;
        if(sum<=n&&n<sum+k+1)
            break;
    }
    diff=n-sum;
    for(i=k;diff--;--i){
        if(i<2)i=k;
        v[i]++;
    }
    for(i=2;i<=k;++i)
        printf("%d ",v[i]);
}

