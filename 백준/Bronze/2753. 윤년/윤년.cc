#include<stdio.h>
main(){
	int a;
	bool b;
	scanf("%d",&a);
	if(a>=1&&a<=4000){
		if(a%4==0){
			if(a%100==0){
				if(a%400==0) b=true;
				else b=false;
			}
			else b=true;
		}
		else b=false;
	}
	printf("%d",b);
}