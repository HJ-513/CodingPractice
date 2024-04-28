#include<stdio.h>
main(){
    int X,N,a,b,sum=0;
    scanf("%d\n%d",&X,&N);
    for(int i=0;i<N;i++){
    	scanf("%d %d",&a,&b);
    	sum+=a*b;
	}
	if(X==sum) printf("Yes");
	else printf("No");
}