#include<stdio.h>
main(){
    int T,a,b;
    scanf("%d",&T);

    for(int i=0;i<T;i++){
    	scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
}