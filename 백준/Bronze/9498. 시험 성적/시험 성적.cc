#include<stdio.h>
main(){
	int a;
	scanf("%d",&a);
	if(a>=0&&a<=100){
		if(a>=90) printf("A");
		else if(a>=80&&a<=89) printf("B");
		else if(a>=70&&a<=79) printf("C");
		else if(a>=60&&a<=69) printf("D");
		else printf("F");
	}
}